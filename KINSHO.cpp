#include "Pieces.cpp"

KINSHO :: KINSHO(int x, int y, int id) : piece(x, y, id) {
        type = "KINSHO";

        moves = {
        {1, 0}, {1, 1}, {1, -1}, {0, -1}, {0, 1}, 
        {-1, 0}
        
    };
}


