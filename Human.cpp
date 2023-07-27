#include "Human.h"

Human::Human()
    {
        Player::setName("Human"); 
    };

Human::Human(std::string name)
    {
        Player::setName(name); 
    }; 
            
        
char Human::makeMove()
    {
        char humanMove = '0';

        std::cout<<"Enter move: "; 
        std::cin>> humanMove; 
        std::cout << std::endl; 
        
        

        return humanMove; 
    }