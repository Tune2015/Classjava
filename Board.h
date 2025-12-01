#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <string>
#include "Entity.h"

class Board {
public:
    bool loadFromFile(const std::string& path);    // Level loading
    void render(const Entity& pacman, const std::vector<Entity*>& ghosts) const;

    bool isWalkable(Position p) const;
    bool inBounds(Position p) const;

    bool consumePellet(Position p);                // returns true if pellet eaten
    int remainingPellets() const { return pelletsRemaining_; }

    // UX helpers
    void requestQuit() { quit_ = true; }
    bool shouldQuit() const { return quit_; }

    // Spawn queries
    Position findChar(char glyph) const;           // 'P' start; 'G' spawns

private:
    std::vector<std::string> grid_;
    int rows_ = 0;
    int cols_ = 0;
    int pelletsRemaining_ = 0;
    bool quit_ = false;
};

#endif