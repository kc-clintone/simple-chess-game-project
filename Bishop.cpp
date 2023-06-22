
#include "Bishop.h"

Bishop::Bishop(string name, Coordinates check, string color)
    : Piece(name, check, color) {}

int Bishop::possibleMoves(Coordinates**& arrayMoves) {
    int numMoves = 0;

    // Checking the moves in all four diagonal directions
    for (int i = 1; i <= 7; i++) {
        // Move up-left
        Coordinates target(getRow() - i, getColumn() - i);
        if (checkBoundsAndAddMove(target, arrayMoves, numMoves))
            break;

        // Move up-right
        target.setCoordinates(getRow() - i, getColumn() + i);
        if (checkBoundsAndAddMove(target, arrayMoves, numMoves))
            break;

        // Move down-left
        target.setCoordinates(getRow() + i, getColumn() - i);
        if (checkBoundsAndAddMove(target, arrayMoves, numMoves))
            break;

        // Move down-right
        target.setCoordinates(getRow() + i, getColumn() + i);
        if (checkBoundsAndAddMove(target, arrayMoves, numMoves))
            break;
    }

    return numMoves;
}

bool Bishop::checkBoundsAndAddMove(Coordinates& target, Coordinates**& arrayMoves, int& numMoves) {
    if (target.isValid()) {
        Piece* piece = board->pieceEn(target);
        if (piece == nullptr) {
            arrayMoves[numMoves++] = new Coordinates(target);
        }
        else if (piece->getColor() != color) {
            arrayMoves[numMoves++] = new Coordinates(target);
            return true; 
        }
        else {
            return true;  
        }
    }
    return false; 
}
