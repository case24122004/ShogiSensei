#include "Pieces.cpp"

HISHA :: HISHA(int x, int y, int id) : piece(x, y, id){
        type = "HISHA";

        moves = {

                {1, 0}, {0, 1}, {0, -1}, {-1, 0}

        };
}


void HISHA :: promotePiece(){
        type = "RYUO";

        moves = {
        {1, 0}, {0, 1}, {0, -1}, {-1, 0}, 
        {1, 1}, {1, -1}, {-1, 1},
        {-1, -1}
        };
}