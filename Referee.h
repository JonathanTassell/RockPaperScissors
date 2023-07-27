#define REFEREE_H 
#ifdef REFEREE_H 

#include "Player.h"

class Referee : public Player{
    
    public: 
        Referee(); 
        Player * refGame(Player * player1, Player * player2); 

        char makeMove(); 

};


#endif 