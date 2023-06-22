#include "Knight.h"

Knight::Knight(string name, Coordinates check, string color)
    : Piece(name, check, color) {}

int Knight::possibleMoves(Coordinates**& arrayMoves) {
    int numMoves = 0;

    // Calculating all eight possible knight moves
    int rowOffsets[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
    int colOffsets[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    for (int i = 0; i < 8; i++) {
        Coordinates target(getRow() + rowOffsets[i], getColumn() + colOffsets[i]);
        if (target.isValid()) {
            Piece* piece = board->pieceEn(target);
            if (piece == nullptr || piece->getColor() != color) {
                arrayMoves[numMoves++] = new Coordinates(target);
            }
        }
    }

    return numMoves;
}
