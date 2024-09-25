#include "../include/Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    if (N <= 0) 
    {
        std::cout <<"\033[31m"<< "Error: Allocation failure Detected" "\033[0m"<< std::endl;
        return NULL;
    }
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(name);
        zombies[i].announce();
    }
    return  zombies;
}
