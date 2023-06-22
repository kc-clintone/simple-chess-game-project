#ifndef PIECE_H
#define PIECE_H

#include <string>
#include "coordinates.h"

class Board;

class Piece {
protected:
    std::string name;
    Coordinates check;
    int value;
    std::string color;
    Board* board;

public:
    static const std::string NAME_BLACK;
    static const std::string NAME_WHITE;
    static const std::string NAME_NO_COLOR;

    Piece(const std::string& name, const Coordinates& check, const std::string& color, Board* board);
    virtual ~Piece() = default;

    const std::string& getName() const;
    const std::string& getColor() const;
    const Coordinates& getCheck() const;
    int getValue() const;
    void setCheck(const Coordinates& check);
    Board* getBoard() const;
    void setBoard(Board* board);

    virtual int possibleMoves(Coordinates**& arrayMoves) = 0;
};

#endif
