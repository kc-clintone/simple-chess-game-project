#include "Piece.h"
#include "Board.h"

const std::string Piece::NAME_BLACK = "Black";
const std::string Piece::NAME_WHITE = "White";
const std::string Piece::NAME_NO_COLOR = "No Color";

Piece::Piece(const std::string& name, const Coordinates& check, const std::string& color, Board* board)
    : name(name), check(check), color(color), board(board) {}

const std::string& Piece::getName() const {
    return name;
}

const std::string& Piece::getColor() const {
    return color;
}

const Coordinates& Piece::getCheck() const {
    return check;
}

int Piece::getValue() const {
    return value;
}

void Piece::setCheck(const Coordinates& check) {
    this->check = check;
}

Board* Piece::getBoard() const {
    return board;
}

void Piece::setBoard(Board* board) {
    this->board = board;
}
