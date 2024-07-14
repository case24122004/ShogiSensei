#include <iostream>
#include "Pieces.cpp"
#include <vector>

struct Player_1{
    int player;
    std :: vector<piece> captureTable1;
    std :: string name;
    
    void takePiece(piece p);

};

struct Player_2{
    int player;
    std :: string name;
    std :: vector<piece> captureTable2;
    


};



