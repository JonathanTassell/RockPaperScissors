#ifndef COMPUTER_H_
#define COMPUTER_H_


#include "Human.h"

class Computer : public Human{
    
    public:
        Computer(); 
        char makeMove(); 

}; 

#endif 