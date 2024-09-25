#include "../include/HumanA.hpp"

HumanA::HumanA(str name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack(void) const
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}