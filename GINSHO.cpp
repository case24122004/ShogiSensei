#include "Pieces.cpp"

GINSHO :: GINSHO(int x, int y, int id) : piece(x, y, id) {
        type = "GINSHO";

        moves = {
        "forward", "diagRight", "diagLeft", 
        "diagBackRight", "diagBackLeft", 
        
    };
}


void GINSHO :: promotePiece(){
    type = "NARIGIN";

    moves = {
        "forward", "diagRight", "diagLeft", "left", "right", 
        "back"
    };
}
