#include "../include/Zombie.hpp"

void Zombie::randomChump( std::string name )
{
    Zombie y(name);
    y.announce();
    return ;
}