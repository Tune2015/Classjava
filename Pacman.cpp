#include "Pacman.h"
#include "Board.h"
#include <iostream>

void Pacman::update(Board& board) {
    std::cout << "Move (W/A/S/D), Q to quit: ";
    char c;
    if (!(std::cin >> c)) return;
    Position next = pos();
    switch (std::tolower(c)) {
        case 'w': next.row -= 1; break;
        case 's': next.row += 1; break;
        case 'a': next.col -= 1; break;
        case 'd': next.col += 1; break;
        case 'q': board.requestQuit(); return;
        default: return;
    }
    if (canMoveTo(board, next)) {
        setPos(next);
        if (board.consumePellet(next)) {
            score_ += 10;
        }
    }
}