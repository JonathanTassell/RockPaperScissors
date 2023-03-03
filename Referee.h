#ifndef REFEREE_H_
#define REFEREE_H_


#include "Player.h"

class Referee : public Player{
    
    public: 
        Referee(); 
        Player * refGame(Player * player1, Player * player2); 

        char makeMove(); 

};


#endif 