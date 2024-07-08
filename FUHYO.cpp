#include "Pieces.cpp"

FUHYO :: FUHYO(int x, int y, int id) : piece(x, y, id) {
        type = "FUHYO";
        
        moves = {
        "forward"
        };
}

void FUHYO :: promotePiece(){
        type = "TOKIN";


        moves = {
        "forward", "diagRight", "diagLeft", "left", "right", 
        "back"
        };
}
 
void FUHYO :: forcePromotion(){
        this->promotePiece();
}
