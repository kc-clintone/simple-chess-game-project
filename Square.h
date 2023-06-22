#ifndef SQUARE_H
#define SQUARE_H

#include "Coordinates.h"

class Piece; 

class Square {
private:
    Coordinates coordinates;
    std::string color;
    Piece* piece;

public:
    static const std::string NAME_BLACK;
    static const std::string NAME_WHITE;
    static const std::string NAME_NO_COLOR;

    Square();
    Square(const Coordinates& coordinates, const std::string& color);
    ~Square();

    void setCoordinatesColor(char column, int row);
    void setColor(const std::string& color);
    void setPiece(Piece* piece);
    const Coordinates& getCoordinates() const;
    char getColumn() const;
    int getRow() const;
    const std::string& getColor() const;
    Piece* getPiece() const;
};

#endif 
