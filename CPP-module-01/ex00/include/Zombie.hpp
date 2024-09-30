#pragma once
#include <iostream>
#include <string>

typedef std::string str;

class Zombie
{
private:
    std::string name;
public:
    Zombie(str name);
    ~Zombie();
    void announce( void );
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
};
