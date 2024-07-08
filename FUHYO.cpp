#include "Pieces.cpp"

FUHYO :: FUHYO(int x, int y, int id) : piece(x, y, id) {
        type = "FUHYO";
        
        moves = {
        {1, 0}
        };
}

void FUHYO :: promotePiece(){
        type = "TOKIN";


        moves = {
        {1, 0}, {1, 1}, {1, -1}, {0, -1}, {0, 1}, 
        {-1, 0}
        };
}
 
void FUHYO :: forcePromotion(){
        this->promotePiece();
}
