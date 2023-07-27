#include "Referee.h"

Referee::Referee(){}; 

Player * Referee::refGame(Player * player1, Player * player2)
{ 
    char moveP1 = player1->makeMove(); 
    char moveP2 = player2->makeMove(); 

    if(moveP1 == moveP2)
    {
        return nullptr; 
    }
    
    else if(moveP1=='S' && moveP2=='R')
    {
        return player2; 
    }

     else if(moveP1=='R' && moveP2=='S')
    {
        return player1; 
    }

     else if(moveP1=='R' && moveP2=='P')
    {
        return player2; 
    }

     else if(moveP1=='P' && moveP2=='R')
    {
        return player1; 
    }
     else if(moveP1=='S' && moveP2=='P')
    {
        return player1; 
    }
     else if(moveP1=='P' && moveP2=='S')
    {
        return player2; 
    }
    else{return nullptr;}





    
}; 

char Referee::makeMove(){return 'N';}; 