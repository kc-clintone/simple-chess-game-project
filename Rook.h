#ifndef ROOK_H
#define ROOK_H

#include "Piece.h"

class Rook : public Piece {
public:
    Rook(const std::string& name, const Coordinates& check, const std::string& color, Board* board);

    int possibleMoves(Coordinates**& arrayMoves) override;
};

#endif 
