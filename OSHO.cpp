#include "Pieces.cpp"

OSHO :: OSHO(int x, int y, int id) : piece(x, y, id) {
        type = "OSHO";

        moves = {
        {1, 0}, {1, 1}, {1, -1}, {0, -1}, {0, 1}, 
        {-1, 1}, {-1, -1}, {-1, 0}
    };
}




