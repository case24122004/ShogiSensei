#include "Pieces.cpp"

KEIMA :: KEIMA(int x, int y, int id) : piece(x, y, id) {
        type = "KEIMA";

        moves = {

                {2, 1}, {2, -1}

        };
}

void KEIMA :: promotePiece(){
        type = "NARIKEI";
        
        moves = {

        {1, 0}, {1, 1}, {1, -1}, {0, -1}, {0, 1}, 
        {-1, 0}
        
        };
}

void KYOSHA :: forcePromotion(){
        this->promotePiece();
}

