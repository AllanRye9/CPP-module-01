#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

typedef std::string str;

class Weapon
{
    private:
        str type;
    public:
        Weapon();
        Weapon(str type);
        ~Weapon();
        const str	&getType() const;
		void		setType(str ntype);
};

#endif