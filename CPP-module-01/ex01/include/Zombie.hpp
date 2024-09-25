#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <stdlib.h>

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

#endif
