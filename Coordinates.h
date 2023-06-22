#ifndef COORDINATES_H
#define COORDINATES_H

class Coordinates {
private:
    int row;
    char column;

public:
    Coordinates();
    Coordinates(int row, char column);
    Coordinates(const Coordinates& other);

    int getRow() const;
    char getColumn() const;
    void setRow(int row);
    void setColumn(char column);

    friend std::ostream& operator<<(std::ostream& os, const Coordinates& coordinates);
};

#endif
