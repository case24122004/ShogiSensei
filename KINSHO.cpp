#include "Pieces.cpp"

KINSHO :: KINSHO(int x, int y, int id) : piece(x, y, id) {
        type = "KINSHO";

        moves = {
        "forward", "diagRight", "diagLeft", "left", "right", 
        "back"
        
    };
}


