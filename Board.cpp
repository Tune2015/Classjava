#include "Board.h"
#include <fstream>
#include <iostream>

bool Board::loadFromFile(const std::string& path) {
    std::ifstream in(path);
    if (!in) {
        std::cerr << "Failed to open level file: " << path << "\n";
        return false;
    }
    grid_.clear();
    std::string line;
    while (std::getline(in, line)) {
        grid_.push_back(line);
    }
    rows_ = static_cast<int>(grid_.size());
    cols_ = rows_ ? static_cast<int>(grid_[0].size()) : 0;

    pelletsRemaining_ = 0;
    for (const auto& r : grid_) {
        for (char c : r) {
            if (c == '.') ++pelletsRemaining_;
        }
    }
    quit_ = false;
    return true;
}

void Board::render(const Entity& pacman, const std::vector<Entity*>& ghosts) const {
    // Copy grid
    std::vector<std::string> frame = grid_;
    // Place ghosts
    for (auto* g : ghosts) {
        Position p = g->pos();
        if (inBounds(p)) frame[p.row][p.col] = g->icon();
    }
    // Place pacman
    Position pp = pacman.pos();
    if (inBounds(pp)) frame[pp.row][pp.col] = pacman.icon();

    // Print UI
    for (const auto& row : frame) {
        std::cout << row << "\n";
    }
}

bool Board::inBounds(Position p) const {
    return p.row >= 0 && p.row < rows_ && p.col >= 0 && p.col < cols_;
}

bool Board::isWalkable(Position p) const {
    if (!inBounds(p)) return false;
    char c = grid_[p.row][p.col];
    return c != '#';
}

bool Board::consumePellet(Position p) {
    if (!inBounds(p)) return false;
    if (grid_[p.row][p.col] == '.') {
        grid_[p.row][p.col] = ' ';
        --pelletsRemaining_;
        return true;
    }
    return false;
}

Position Board::findChar(char glyph) const {
    for (int r = 0; r < rows_; ++r) {
        for (int c = 0; c < cols_; ++c) {
            if (grid_[r][c] == glyph) return Position{r, c};
        }
    }
    return Position{-1, -1};
}