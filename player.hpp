#include <iostream>
#include "Pieces.cpp"
#include <vector>
struct Player_1{
    int player;
    std :: vector<piece> captureTable1;
    std :: string name;
    OSHO o1;
    KINSHO kg1;
    KINSHO kg2;
    GINSHO sg1;
    GINSHO sg2;
    KEIMA n1;
    KEIMA n2;
    KYOSHA l1;
    KYOSHA l2;
    KAKUGYO b;
    HISHA h;
    FUHYO p1;
    FUHYO p2;
    FUHYO p3;
    FUHYO p4;
    FUHYO p5;
    FUHYO p6;
    FUHYO p7;
    FUHYO p8;
    FUHYO p9;
    NONE n;
    
    Player_1(int x, int y)
        : o1(8, 4, 1), kg1(8, 3, 1), kg2(8, 5, 1), sg1(8, 2, 1), sg2(8, 6, 1), 
          n1(8, 1, 1), n2(8, 7, 1), l1(8, 0,1 ), l2(8, 8, 1), b(7, 1, 1), h(7, 7, 1), p1(6, 0, 1),
           p2(6, 1, 1), p3(6, 2, 1), p4(6, 3, 1), p5(6, 4, 1), p6(6, 5, 1), p7(6, 6, 1), 
           p8(6, 7, 1), p9(6, 8, 1), n() {}
    void takeFromP2(piece p){}

};

struct Player_2{
    int player;
    std :: string name;
    std :: vector<piece> captureTable2;
    OSHO o1;
    KINSHO kg1;
    KINSHO kg2;
    GINSHO sg1;
    GINSHO sg2;
    KEIMA n1;
    KEIMA n2;
    KYOSHA l1;
    KYOSHA l2;
    KAKUGYO b;
    HISHA h;
    FUHYO p1;
    FUHYO p2;
    FUHYO p3;
    FUHYO p4;
    FUHYO p5;
    FUHYO p6;
    FUHYO p7;
    FUHYO p8;
    FUHYO p9;
    NONE n;
    Player_2(int x, int y)
        : o1(0, 5, 2), kg1(0, 1, 2), kg2(0, 5, 2), sg1(0, 2, 2), sg2(0, 6, 2), 
          n1(0, 1, 2), n2(0, 7, 2), l1(0, 0, 2), l2(0, 8, 2), b(1, 1 , 2), h(1, 7, 2), 
          p1(2, 0, 2), p2(2, 1, 2), p3(2, 2, 2), p4(2, 3, 2), p5(2, 4, 2), p6(2, 5, 2), 
          p7(2, 6, 2), p8(2, 7, 2), p9(2, 8, 2), n() {}

  void takeFromP1(piece p){}
};



