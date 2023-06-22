#ifndef KNIGHT_H
#define KNIGHT_H

#include "Piece.h"

class Knight : public Piece {
public:
    Knight(const std::string& name, const Coordinates& check, const std::string& color, Board* Board);
    int possibleMoves(Coordinates**& arrayMoves) override;
};

#endif
