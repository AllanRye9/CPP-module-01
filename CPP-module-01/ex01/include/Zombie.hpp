#pragma once
#include <iostream>
#include <string>

typedef std::string str;

class Zombie
{
    private:
        std::string name;
        int N;
    public:
        Zombie();
        ~Zombie();
        Zombie* zombieHorde( int N, std::string name );
        void announce( void ) const;
        void setName(str name);
};
