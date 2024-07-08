#include "Pieces.cpp"
# include "player.cpp"

struct nineBoard{
NONE space;
Player_1 p1;
Player_2 p2;

piece nineBoard[9][9] = {

    {p2.l1, p2.n1, p2.sg1, p2.kg1, p2.o1, p2.kg2, p2.sg2, p2.n2, p2.l2},
    {space, p2.b, space, space, space, space, space, p2.h, space},
    {p2.p1, p2.p2, p2.p3, p2.p4, p2.p5, p2.p6, p2.p7, p2.p8, p2.p9},
    {space, space, space, space, space, space, space, space, space },
    {space, space, space, space, space, space, space, space, space },
    {space, space, space, space, space, space, space, space, space },
    {p1.p1, p1.p2, p1.p3, p1.p4, p1.p5, p1.p6, p1.p7, p1.p8, p1.p9},
    {space, p1.b, space, space, space, space, space, p1.h, space},
    {p1.l1, p1.n1, p1.sg1, p1.kg1, p1.o1, p1.kg2, p1.sg2, p1.n2, p1.l2}

};

void movePiece(int posx, int posy, piece p); //move piece
void checkMate(); //determing if checkmate
void inCheck(); //determine if in check
bool validMove(int posx, int posy, piece p); //determine if move is valid, edge cases, own pieces, taking other pieces
bool wantToTake();
void takePiece(piece p);


};