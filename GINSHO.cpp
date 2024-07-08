#include "Pieces.cpp"

GINSHO :: GINSHO(int x, int y, int id) : piece(x, y, id) {
        type = "GINSHO";

        moves = {
        {1, 0}, {1, 1}, {1, -1}, 
        {-1, 1}, {-1, -1}, 
        
    };
}


void GINSHO :: promotePiece(){
    type = "NARIGIN";

    moves = {
        {1, 0}, {1, 1}, {1, -1}, {0, -1}, {0, 1},
        {-1, 0}
    };
}
