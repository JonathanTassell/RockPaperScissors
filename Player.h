#define PLAYER_H_
#ifdef PLAYER_H_


#include <iostream>

class Player{

    private:
        std::string playerName; 

    public:
        virtual char makeMove()=0; 
        std::string getName();
        void setName(std::string newName); 
    


};


#endif 
