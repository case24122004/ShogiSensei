#include "player.cpp"

struct nineBoard{
Player_1 p1;
Player_2 p2;
const int bSize = 9;
piece * Board[9][9];
void initializeBoard();
void movePiece(int posx, int posy, piece * p); //move piece
void checkMate(); //determing if checkmate
void inCheck(); //determine if in check
bool validMove(int posx, int posy, piece * p); //determine if move is valid, edge cases, own pieces, taking other pieces
bool wantToTake();
void takePiece(piece p);
void getKyoMoves(KYOSHA k);
void getKakuMoves(KAKUGYO k);
void getHishaMoves(HISHA h);

};