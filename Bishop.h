#ifndef BOARD_H
#define BOARD_H

#include "Square.h"

class Board {
private:
    int numRows;
    int numColumns;
    Square** squares;

public:
    Board(int numRows, int numColumns);
    ~Board();

    int getNumRows() const;
    int getNumColumns() const;
    Square** getSquares() const;
};

#endif
