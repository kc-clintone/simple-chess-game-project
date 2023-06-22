#include "Board.h"
#include "Knight.h"
#include <iostream>

int main() {
    Board board(8, 8); 

    // Create a Knight piece at position (2, 1)
    Coordinates knightPosition(2, 'B');
    Knight knight("Knight", knightPosition, Piece::NAME_WHITE, &board);

    // Get the possible moves for the Knight
    Coordinates** knightMoves;
    int numMoves = knight.possibleMoves(knightMoves);

    // Print the possible moves
    for (int i = 0; i < numMoves; i++) {
        std::cout << "Move " << i + 1 << ": " << knightMoves[i]->getColumn() << knightMoves[i]->getRow() << std::endl;
    }

    // Clean up the allocated memory for the moves
    for (int i = 0; i < numMoves; i++) {
        delete knightMoves[i];
    }
    delete[] knightMoves;

    return 0;
}
