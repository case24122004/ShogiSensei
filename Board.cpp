#include "Board.hpp"
#include "Pieces.cpp"

void nineBoard :: initializeBoard(){
       for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            // PLAYER ONE PIECES
            if (i == 0) {
                if (j == 0 || j == 8) {
                    // initialize the lances
                    this->Board[i][j] = new KYOSHA(i, j, 1);
                } else if (j == 1 || j == 7) {
                    // initialize the knights
                    this->Board[i][j] = new KEIMA(i, j, 1);
                } else if (j == 2 || j == 6) {
                    // initialize the Silver Generals
                    this->Board[i][j] = new GINSHO(i, j, 1);
                } else if (j == 3 || j == 5) {
                    // initialize the Gold Generals
                    this->Board[i][j] = new KINSHO(i, j, 1);
                } else if (j == 4) {
                    // initialize the king
                    this->Board[i][j] = new OSHO(i, j, 1);
                }
            } else if (i == 1) {
                // initialize the rook and the bishop
                if (j == 1) {
                    this->Board[i][j] = new KAKUGYO(i, j, 1);
                } else if (j == 7) {
                    this->Board[i][j] = new HISHA(i, j, 1);
                } else {
                    this->Board[i][j] = nullptr;
                }
            } else if (i == 2) {
                // initialize the pawns
                this->Board[i][j] = new FUHYO(i, j, 1);
            } else if (i == 6) {
                // initialize the pawns for player 2
                this->Board[i][j] = new FUHYO(i, j, 2);
            } else if (i == 7) {
                // initialize the rook and the bishop for player 2
                if (j == 1) {
                    this->Board[i][j] = new HISHA(i, j, 2);
                } else if (j == 7) {
                    this->Board[i][j] = new KAKUGYO(i, j, 2);
                } else {
                    this->Board[i][j] = nullptr;
                }
            } else if (i == 8) {
                if (j == 0 || j == 8) {
                    // initialize the lances for player 2
                    this->Board[i][j] = new KYOSHA(i, j, 2);
                } else if (j == 1 || j == 7) {
                    // initialize the knights for player 2
                    this->Board[i][j] = new KEIMA(i, j, 2);
                } else if (j == 2 || j == 6) {
                    // initialize the Silver Generals for player 2
                    this->Board[i][j] = new GINSHO(i, j, 2);
                } else if (j == 3 || j == 5) {
                    // initialize the Gold Generals for player 2
                    this->Board[i][j] = new KINSHO(i, j, 2);
                } else if (j == 4) {
                    // initialize the king for player 2
                    this->Board[i][j] = new OSHO(i, j, 2);
                }
            } else {
                // fill in the empty spaces
                this->Board[i][j] = nullptr;
            }
        }
    }
}
// //specific logic for the moves of the knight
// void nineBoard :: getKyoMoves(Peice p){

//         //get the direction the player will move
//         p->direction = p->isPlayerOne() ? 1 : -1;
//         //get the position temporarily 
//         int tempY = p->posY;

//         while(true){

//                 tempY += p->direction;
//                 if(tempY < 0 || tempY >= 9){break;}
//                 if(this->Board[tempY][p->posX].playerID == p->playerID){break;}
//                 p->moves.push_back({tempY, p->posY});

//         }

// }

//specific logic for moves of the bishop
void nineBoard :: getKakuMoves(KAKUGYO k){

}

//specific logic for the rook moves
void nineBoard :: getHishaMoves(HISHA h){
        
}



// determine 
void nineBoard :: inCheck(){

}

//determine if king is in checkmate
void nineBoard :: checkMate(){

}
//just check if the coordinates passed are invalid
bool nineBoard :: validMove(int posx, int posy, piece * p){
        //get the position of the piece
        int x_ = p->posX;
        int y_ = p->posY;

        //test the move before doing it
        x_ += posx; 
        y_ += posy; 
        piece *temp = this->Board[x_][y_];
        piece *test = this->Board[p->posX][p->posY];

        //check if taking own piece
        if (temp->playerID == test->playerID){

                std :: cout << "Can't take your own piece" << std :: endl;
                return false;

        }
        else{
                return true;
        }
        
}

//general game loop
void nineBoard :: movePiece(int x, int y, piece * p){
    
    std :: string choice;
    bool valid = validMove(x, y, p);
    if(valid){
            
            p->posX = x;
            p->posY = y;

            //check if the piece must promote
            if(
               (p->type == "FUHYO" && p->playerID == 1 && p->posY == 8) ||
               (p->type == "FUHYO" && p->playerID == 2 && p->posY == 0) || 
               (p->type == "KYOSHA" && p->playerID == 1 && p->posY == 8) ||
               (p->type == "KYOSHA" && p->playerID == 2 && p->posY == 0) ||
               (p->type == "KEIMA" && p->playerID == 1 && p->posY >= 7) ||
               (p->type == "KEIMA" && p->playerID == 2 && p->posY <= 1)
               ){
                        p->forcePromotion(); // the piece must promote
                        Board[y][x] = p; //set the piece on the board
                        return;
               }
        
            p->checkPromotionZone(); //check if a piece is in promotion zone
            
            // give the option to promote the piece
            if(p->canPromote){
                do{
                        std :: cout << "Do you want to promote this piece?" << std :: endl;
                        std :: cin >> choice;
                
                } while(choice != "yes" && choice != "no");

                if(choice == "yes"){
                        if(Board[y][x]->playerID != p->playerID){
                            p1.takePiece(*Board[y][x]);
                        }
                        p->promotePiece(); 
                        Board[y][x] = p; //set the promoted piece on the board
                }
                
            }
            

            Board[y][x] = p; //set the piece on the board
            return;
    } 
        return;
}

