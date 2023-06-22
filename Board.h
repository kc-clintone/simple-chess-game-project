#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Coordinates.h"
#include "Square.h"

class Board {
private:
    int numRows;
    int numColumns;
    std::vector<std::vector<Square>> squares;

public:
    Board();
    Board(int numRows, int numColumns);
    ~Board();

    void setNumRows(int numRows);
    void setNumColumns(int numColumns);
    int getNumRows() const;
    int getNumColumns() const;
    std::vector<std::vector<Square>>& getSquares();

    Piece* pieceAt(char column, int row) const;
    Piece* pieceAt(const Coordinates& position) const;

    void initialize();

};

#endif
