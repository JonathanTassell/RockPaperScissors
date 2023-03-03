#ifndef HUMAN_H_
#define HUMAN_H_


#include <iostream> 
#include "Referee.h"

class Human : public Referee{
    public: 
        Human();
        Human(std::string name); 
        char makeMove(); 
}; 


#endif