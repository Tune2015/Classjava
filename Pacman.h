#ifndef PACMAN_H
#define PACMAN_H

#include "Entity.h"

class Pacman : public Entity {
public:
    char icon() const override { return 'P'; }
    void update(Board& board) override; // reads input, moves, consumes pellets
    int score() const { return score_; }
    int lives() const { return lives_; }
    void loseLife() { if (lives_ > 0) --lives_; }

private:
    int score_ = 0;
    int lives_ = 3;
};

#endif