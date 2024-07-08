#include "Pieces.cpp"

KAKUGYO :: KAKUGYO(int x, int y, int id) : piece(x, y, id) {
        type = "KAKUGYO";

        moves = {
        "diagRight", "diagLeft", "diagBackRight", "diagBackLeft"
        };
}

void KAKUGYO :: promotePiece(){
        type = "RYUMA";

        moves = {
                "diagRight", "diagLeft", "diagBackRight", "diagBackLeft", 
                "right", "left", "back", "forward"
        };
}