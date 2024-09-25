#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

typedef std::string str;

class HumanB
{
    private:
        str name;
        Weapon *weapon;
    public:
        HumanB(str name);
        ~HumanB();
        void attack(void) const;
        void setWeapon(Weapon &weapon);
};

#endif