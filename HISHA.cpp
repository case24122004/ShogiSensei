#include "Pieces.cpp"

HISHA :: HISHA(int x, int y, int id) : piece(x, y, id){
        type = "HISHA";

        moves = {
        "forward", "right", "left", "back"
        };
}


void HISHA :: promotePiece(){
        type = "RYUO";

        moves = {
        "forward", "right", "left", "back", 
        "diagForwardRight", "diagForwardLeft", "diagBackRight",
        "diagBackLeft"
        };
}