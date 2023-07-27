#define HUMAN_H
#ifdef HUMAN_H

#include <iostream> 
#include "Referee.h"

class Human : public Referee{
    public: 
        Human(); 
        Human(std::string name); 
        char makeMove(); 
}; 


#endif