#include "Pieces.cpp"

KAKUGYO :: KAKUGYO(int x, int y, int id) : piece(x, y, id) {
        type = "KAKUGYO";

        moves = {
                
                {1, 1}, {1, -1}, {-1, 1}, {-1, -1}

        };
}

void KAKUGYO :: promotePiece(){
        type = "RYUMA";

        moves = {
                {1, 1}, {1, -1}, {-1, 1}, {-1, -1}, 
                {0, 1}, {0, -1}, {-1, 0}, {1, 0}
        };
}