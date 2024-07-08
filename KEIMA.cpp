#include "Pieces.cpp"

KEIMA :: KEIMA(int x, int y, int id) : piece(x, y, id) {
        type = "KEIMA";

        moves = {
        "forDiagL", "forDiagR"
        };
}

void KEIMA :: promotePiece(){
        type = "NARIKEI";
        
        moves = {
        "forward", "diagRight", "diagLeft", "left", "right", 
        "back"
        };
}

void KYOSHA :: forcePromotion(){
        this->promotePiece();
}

