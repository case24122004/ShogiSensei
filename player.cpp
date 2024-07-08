#include "player.hpp"

void Player_1 :: takeFromP2(piece p){
    p.playerID = 1;
    captureTable1.push_back(p);
}

void Player_2 :: takeFromP1(piece p){
    p.playerID = 2;
    captureTable2.push_back(p);
}