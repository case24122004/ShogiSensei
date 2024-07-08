#include <iostream>
#include <vector>

//P meand promoted

struct piece{

    std :: string type;
    int posX, posY, playerID;
    bool canPromote = false;
    bool inCheck = false;
    piece(int x = 0, int y = 0, int id = 0) : posX(x), posY(y), playerID(id) {};
    std :: vector <std :: string> moves;
    virtual void promotePiece();
    virtual void forcePromotion();
    virtual void checkPromotionZone(){

        if(playerID == 1 && posY == 6){
        canPromote = true;
        } 
        else if(playerID == 2 && posY == 2){
        canPromote = true;
        }
    }
};

struct OSHO : public piece{

//king
    OSHO(int x, int y, int id) : piece(x, y, id) {};
    
};

//gold general
struct KINSHO : public piece{

    KINSHO(int x, int y, int id) : piece(x, y, id) {};
    
};

//silver general
struct GINSHO : public piece{


    GINSHO(int x, int y, int id) : piece(x, y, id) {};
    void promotePiece() override ;
};
    

//knight
struct KEIMA : public piece{

    KEIMA(int x, int y, int id) : piece(x, y, id) {};
    void promotePiece() override;
    void forcePromotion() override;
};

//lance
struct KYOSHA : public piece{

    KYOSHA(int x, int y, int id) : piece(x, y, id) {};
    void promotePiece() override;
    void forcePromotion() override;
};

//bishop
struct KAKUGYO : public piece{

    KAKUGYO(int x, int y, int id) : piece(x, y, id) {};
    void promotePiece() override;
};

//rook
struct HISHA : public piece{

    HISHA(int x, int y, int id) : piece(x, y, id){};
    void promotePiece() override;
};


//pawn
struct FUHYO : public piece{

    FUHYO(int x, int y, int id) : piece(x, y, id) {};
    void promotePiece() override;
    void forcePromotion() override;
};

struct NONE : public piece{

};




