#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"

class Queen : public Piece {
public:
    Queen(const std::string& name, const Coordinates& check, const std::string& color, Board* board);
    int possibleMoves(Coordinates**& arrayMoves) override;
};

#endif
