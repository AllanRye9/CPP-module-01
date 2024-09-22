#include "../include/Zombie.hpp"

Zombie::Zombie(str name)
{
    this->name = name;
    std::cout << "Be careful ! The zombie " << name << " is in the house !" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->name << " died a second time." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name<<": BraiiiiiiinnnzzzZ..." << std::endl;
}