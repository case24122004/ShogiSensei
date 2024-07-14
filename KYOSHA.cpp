#include "Pieces.cpp"

bool KYOSHA::isPlayerOne() {
    return (this->playerID == 1);
}

KYOSHA :: KYOSHA(int x, int y, int id) : piece(x, y, id) {
        type = "KYOSHA";
}

void KYOSHA :: promotePiece(){
        type = "NARIKYO";

        moves = {
        {1, 0}, {1, 1}, {1, -1}, {0, -1}, {0, 1}, 
        {-1, 1}
        };
        
}

void KYOSHA :: forcePromotion(){
        this->promotePiece();
}

