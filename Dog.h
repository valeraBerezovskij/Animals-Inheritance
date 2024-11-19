#pragma once
#include "Animal.h"
class Dog :
    public Animal
{
public:
    Dog() = default;
    Dog(const std::string& n, const std::string& s, const double w, const std::string& c)
        : Animal(n, s, w, c) {}
    void eat();
    void sound();
};

