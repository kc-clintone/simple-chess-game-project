#include "Pawn.h"

Pawn::Pawn(string name, Coordinates check, string color)
    : Piece(name, check, color) {}

int Pawn::possibleMoves(Coordinates**& arrayMoves) {
    int numMoves = 0;

    // Calculating the possible moves based on pawn's color
    if (color == Piece::NAME_WHITE) {
        // For white pawns, they can move one square forward if the target square is empty
        Coordinates target(getRow() - 1, getColumn());
        if (board->pieceEn(target) == nullptr) {
            arrayMoves[numMoves++] = new Coordinates(target);
        }

        // White pawns can also move two squares forward from the initial position
        if (getRow() == 6) {
            Coordinates target2(getRow() - 2, getColumn());
            if (board->pieceEn(target2) == nullptr && board->pieceEn(target) == nullptr) {
                arrayMoves[numMoves++] = new Coordinates(target2);
            }
        }

        // White pawns can capture diagonally
        Coordinates target3(getRow() - 1, getColumn() - 1);
        if (getColumn() > 0 && board->pieceEn(target3) != nullptr &&
            board->pieceEn(target3)->getColor() == Piece::NAME_BLACK) {
            arrayMoves[numMoves++] = new Coordinates(target3);
        }

        Coordinates target4(getRow() - 1, getColumn() + 1);
        if (getColumn() < 7 && board->pieceEn(target4) != nullptr &&
            board->pieceEn(target4)->getColor() == Piece::NAME_BLACK) {
            arrayMoves[numMoves++] = new Coordinates(target4);
        }
    }
    else if (color == Piece::NAME_BLACK) {
        // For black pawns, they can move one square forward if the target square is empty
        Coordinates target(getRow() + 1, getColumn());
        if (board->pieceEn(target) == nullptr) {
            arrayMoves[numMoves++] = new Coordinates(target);
        }

        // Black pawns can also move two squares forward from the initial position
        if (getRow() == 1) {
            Coordinates target2(getRow() + 2, getColumn());
            if (board->pieceEn(target2) == nullptr && board->pieceEn(target) == nullptr) {
                arrayMoves[numMoves++] = new Coordinates(target2);
            }
        }

        // Black pawns can capture diagonally
        Coordinates target3(getRow() + 1, getColumn() - 1);
        if (getColumn() > 0 && board->pieceEn(target3) != nullptr &&
            board->pieceEn(target3)->getColor() == Piece::NAME_WHITE) {
            arrayMoves[numMoves++] = new Coordinates(target3);
        }

        Coordinates target4(getRow() + 1, getColumn() + 1);
        if (getColumn() < 7 && board->pieceEn(target4) != nullptr &&
            board->pieceEn(target4)->getColor() == Piece::NAME_WHITE) {
            arrayMoves[numMoves++] = new Coordinates(target4);
        }
    }

    return numMoves;
}
