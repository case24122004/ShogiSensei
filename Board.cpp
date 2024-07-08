#include "Board.hpp"

//just check if the coordinates passed are invalid
bool nineBoard :: validMove(int x, int y, piece p){
        //get the position of the piece
        int x_ = p.posX;
        int y_ = p.posY;

        //test the move before doing it
        x_ += x; 
        y_ += y; 
        piece temp = nineBoard[x_][y_];
        piece test = nineBoard[p.posX][p.posY];

        //check if taking own piece
        if (temp.playerID == test.playerID){

                std :: cout << "Can't take your own piece" << std :: endl;
                return false;

        }
        else{
                return true;
        }
        
}



void nineBoard :: movePiece(int x, int y, piece p){

    std :: string choice;
    bool valid = validMove(x, y, p);

    if(valid){
            
            p.posX = x;
            p.posY = y;

            //check if the piece must promote
            if(
               (p.type == "FUHYO" && p.playerID == 1 && p.posY == 8) ||
               (p.type == "FUHYO" && p.playerID == 2 && p.posY == 0) || 
               (p.type == "KYOSHA" && p.playerID == 1 && p.posY == 8) ||
               (p.type == "KYOSHA" && p.playerID == 2 && p.posY == 0) ||
               (p.type == "KEIMA" && p.playerID == 1 && p.posY >= 7) ||
               (p.type == "KEIMA" && p.playerID == 2 && p.posY <= 1)
               ){
                        p.forcePromotion(); // the piece must promote
                        nineBoard[x][y] = p; //set the piece on the board
                        return;
               }
        
            p.checkPromotionZone(); //check if a piece is in promotion zone
            

            if(p.canPromote){
                do{
                        std :: cout << "Do you want to promote this piece?" << std :: endl;
                        std :: cin >> choice;
                
                } while(choice != "yes" && choice != "no");

                if(choice == "yes"){
                        p.promotePiece(); 
                        nineBoard[x][y] = p; //set the promoted piece on the board
                }
                else {
                        return;
                }
            }
            nineBoard[x][y] = p; //set the piece on the board
            return;
    } 
    else {
            throw("Can't move here");
        }
}

