#ifndef GHOST_H
#define GHOST_H

#include "Entity.h"

class Ghost : public Entity {
public:
    explicit Ghost(char glyph = 'G') : glyph_(glyph) {}
    char icon() const override { return glyph_; }
    void update(Board& board) override; // TODO: AI (random / chase)

private:
    char glyph_;
};

#endif