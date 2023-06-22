#include "King.h"

King::King(string name, Coordinates check, string color)
    : Piece(name, check, color) {}

int King::possibleMoves(Coordinates**& arrayMoves) {
    int numMoves = 0;

    // Calculating all th eight possible king moves
    int rowOffsets[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
    int colOffsets[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

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
