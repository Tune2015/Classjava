#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Board.h"
#include "Pacman.h"
#include "Ghost.h"

class Game {
public:
    bool init(const std::string& levelPath);
    void run();

private:
    void step();
    void renderUI() const;
    bool checkCollisions(); // TODO: collisions with ghosts
    bool checkWin() const;

    Board board_;
    Pacman pacman_;
    std::vector<Ghost> ghosts_;
};

#endif