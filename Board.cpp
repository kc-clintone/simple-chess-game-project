#include "Board.h"

Board::Board(int numRows, int numColumns) : numRows(numRows), numColumns(numColumns) {
    squares = new Square*[numRows];
    for (int i = 0; i < numRows; ++i) {
        squares[i] = new Square[numColumns];
    }
}

Board::~Board() {
    for (int i = 0; i < numRows; ++i) {
        delete[] squares[i];
    }
    delete[] squares;
}

int Board::getNumRows() const {
    return numRows;
}

int Board::getNumColumns() const {
    return numColumns;
}

Square** Board::getSquares() const {
    return squares;
}