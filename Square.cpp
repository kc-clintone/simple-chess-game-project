#include "Square.h"

const std::string Square::NAME_BLACK = "Black";
const std::string Square::NAME_WHITE = "White";
const std::string Square::NAME_NO_COLOR = "No Color";

Square::Square() : coordinates(), color(NAME_NO_COLOR), piece(nullptr) {}

Square::Square(const Coordinates& coordinates, const std::string& color)
    : coordinates(coordinates), color(color), piece(nullptr) {}

Square::~Square() {
    delete piece;
}

void Square::setCoordinatesColor(char column, int row) {
    coordinates.setColumn(column);
    coordinates.setRow(row);
}

void Square::setColor(const std::string& color) {
    this->color = color;
}

void Square::setPiece(Piece* piece) {
    this->piece = piece;
}

const Coordinates& Square::getCoordinates() const {
    return coordinates;
}

char Square::getColumn() const {
    return coordinates.getColumn();
}

int Square::getRow() const {
    return coordinates.getRow();
}

const std::string& Square::getColor() const {
    return color;
}

Piece* Square::getPiece() const {
    return piece;
}
