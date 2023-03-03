#include "Computer.h"
#include <iostream> 

int main(){

    Player* baseclass; 
    Player* beepboopBase; 
    Player* manBase; 

    Computer beepboop; 
    Human man("Jono"); 
    Referee geoff; 

    baseclass = &geoff; 
    beepboopBase = &beepboop; 
    manBase = &man; 

    

    Player* winner = geoff.refGame(beepboopBase, manBase); 

    if(winner == manBase)
        {
            std::cout << manBase->getName() << " wins"; 
        }
    
    if(winner == beepboopBase)
        {
            std::cout << beepboopBase->getName() << " wins"; 
        }
    if(winner == nullptr)
        {
            std::cout << "It was a tie!!"; 
        }

}   