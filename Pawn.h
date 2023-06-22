#ifndef PAWN_H
#define PAWN_H

#include "Piece.h"

class Pawn : public Piece {
public:
    Pawn(const std::string& name, const Coordinates& check, const std::string& color, Board* board);
    int possibleMoves(Coordinates**& arrayMoves) override;
};

#endif 
