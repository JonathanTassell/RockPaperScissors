#define COMPUTER_H
#ifdef COMPUTER_H

#include "Human.h"

class Computer : public Human{
    
    public:
        Computer(); 
        char makeMove(); 

}; 



#endif