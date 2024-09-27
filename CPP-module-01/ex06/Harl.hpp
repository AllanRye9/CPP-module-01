#pragma once

#include <iostream>
#include <string>

typedef std::string str;

class Harl
{
void debug(void) const;
void info(void) const;
void warning(void) const;
void error(void) const;
public:
    Harl();
    ~Harl();
    void complain( std::string level );
};