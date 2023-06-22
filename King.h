#ifndef KING_H
#define KING_H

#include "Piece.h"

class King : public Piece {
public:
    King(const std::string& name, const Coordinates& check, const std::string& color, Board* board);
    int possibleMoves(Coordinates**& arrayMoves) override;
};

#endif
