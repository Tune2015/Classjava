#ifndef ENTITY_H
#define ENTITY_H

#include <utility>

struct Position {
    int row;
    int col;
};

class Board;

class Entity {
public:
    virtual ~Entity() = default;
    virtual char icon() const = 0;
    Position pos() const { return pos_; }
    void setPos(Position p) { pos_ = p; }

    virtual void update(Board& board) = 0;

protected:
    bool canMoveTo(const Board& board, Position p) const;
    void moveIfPossible(Board& board, Position p);

    Position pos_{};
};

#endif