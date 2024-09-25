#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

typedef std::string str;

class HumanA
{
    private:
        str name;
        Weapon &weapon;
    public:
        HumanA(str name, Weapon &weapon);
        ~HumanA();
        void attack(void) const;
};

#endif