#include "Pieces.cpp"

KYOSHA :: KYOSHA(int x, int y, int id) : piece(x, y, id) {
        type = "KYOSHA";

        moves = {
        "forward"
        };
}

void KYOSHA :: promotePiece(){
        type = "NARIKYO";

        moves = {
        "forward", "diagRight", "diagLeft", "left", "right", 
        "back"
        };
        
}

void KYOSHA :: forcePromotion(){
        this->promotePiece();
}
