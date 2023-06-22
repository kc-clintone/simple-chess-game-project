#include "Queen.h"

Queen::Queen(string name, Coordinates check, string color)
    : Piece(name, check, color) {}

int Queen::possibleMoves(Coordinates**& arrayMoves) {
    int numMoves = 0;

    // Checking moves in all eight directions: up, down, left, right, and all four diagonals
    for (int i = 1; i <= 7; i++) {
        // Move up
        Coordinates target(getRow() - i, getColumn());
        if (checkBoundsAndAddMove(target, arrayMoves, numMoves))
            break;

        // Move down
        target.setCoordinates(getRow() + i, getColumn());
        if (checkBoundsAndAddMove(target, arrayMoves, numMoves))
            break;

        // Move left
        target.setCoordinates(getRow(), getColumn() - i);
        if (checkBoundsAndAddMove(target, arrayMoves, numMoves))
            break;

        // Move right
        target.setCoordinates(getRow(), getColumn() + i);
        if (checkBoundsAndAddMove(target, arrayMoves, numMoves))
            break;

        // Move up-left
        target.setCoordinates(getRow() - i, getColumn() - i);
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

bool Queen::checkBoundsAndAddMove(Coordinates& target, Coordinates**& arrayMoves, int& numMoves) {
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
