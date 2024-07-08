#include "Pieces.cpp"

OSHO :: OSHO(int x, int y, int id) : piece(x, y, id) {
        type = "OSHO";

        moves = {
        "forward", "diagRight", "diagLeft", "left", "right", 
        "diagBackRight", "diagBackLeft", "back"
    };
}




