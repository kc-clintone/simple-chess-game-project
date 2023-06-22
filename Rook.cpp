#include "Rook.h"

Rook::Rook(string name, Coordinates check, string color)
    : Piece(name, check, color) {}

int Rook::possibleMoves(Coordinates**& arrayMoves) {
    int numMoves = 0;

    // Checking moves in all four directions: up, down, left, and right
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
    }

    return numMoves;
}

bool Rook::checkBoundsAndAddMove(Coordinates& target, Coordinates**& arrayMoves, int& numMoves) {
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
