#include "Game.h"
#include <iostream>

bool Game::init(const std::string& levelPath) {
    if (!board_.loadFromFile(levelPath)) return false;

    Position pStart = board_.findChar('P');
    if (pStart.row < 0) pStart = {1,1}; // fallback
    pacman_.setPos(pStart);

    // Place a couple of ghosts at 'G' markers, or defaults
    Position gStart = board_.findChar('G');
    if (gStart.row < 0) gStart = {pStart.row, pStart.col + 5};
    ghosts_.push_back(Ghost('G'));
    ghosts_.back().setPos(gStart);

    // Optional second ghost
    Position g2 = {gStart.row, gStart.col + 6};
    ghosts_.push_back(Ghost('H'));
    ghosts_.back().setPos(g2);

    return true;
}

void Game::renderUI() const {
    std::vector<Entity*> gptrs;
    gptrs.reserve(ghosts_.size());
    for (const auto& g : ghosts_) {
        // const_cast for render convenience; we only read position
        gptrs.push_back(const_cast<Ghost*>(&g));
    }
    board_.render(pacman_, gptrs);
    std::cout << "Score: " << pacman_.score()
              << "  Lives: " << pacman_.lives()
              << "  Pellets: " << board_.remainingPellets() << "\n";
}

bool Game::checkCollisions() {
    // TODO: Implement collision: if ghost at pacman's position => lose life/end
    return false;
}

bool Game::checkWin() const {
    return board_.remainingPellets() == 0;
}

void Game::step() {
    pacman_.update(board_);
    for (auto& g : ghosts_) g.update(board_);
}

void Game::run() {
    while (!board_.shouldQuit()) {
        renderUI();
        step();

        if (checkCollisions()) {
            std::cout << "Ouch! Caught by a ghost.\n";
            // TODO: handle life decrement, respawn, or end game
        }
        if (checkWin()) {
            renderUI();
            std::cout << "You win! All pellets eaten.\n";
            break;
        }
    }
    std::cout << "Goodbye.\n";
}