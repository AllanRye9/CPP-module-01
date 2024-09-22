#include "../include/Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *z = new Zombie(name);
    z->announce();
    delete(z);
    return z;
}