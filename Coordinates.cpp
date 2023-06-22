#include "Coordinates.h"

Coordinates::Coordinates() : row(0), column('A') {}

Coordinates::Coordinates(int row, char column) : row(row), column(column) {}

Coordinates::Coordinates(const Coordinates& other) : row(other.row), column(other.column) {}

int Coordinates::getRow() const {
    return row;
}

char Coordinates::getColumn() const {
    return column;
}

void Coordinates::setRow(int row) {
    this->row = row;
}

void Coordinates::setColumn(char column) {
    this->column = column;
}

std::ostream& operator<<(std::ostream& os, const Coordinates& coordinates) {
    os << coordinates.column << coordinates.row;
    return os;
}
