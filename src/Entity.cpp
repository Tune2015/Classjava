#include "Entity.h"
#include "Board.h"

bool Entity::canMoveTo(const Board& board, Position p) const {
    return board.isWalkable(p);
}

void Entity::moveIfPossible(Board& board, Position p) {
    if (canMoveTo(board, p)) {
        setPos(p);
    }
}