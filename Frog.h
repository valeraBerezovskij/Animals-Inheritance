#pragma once
#include "Animal.h"

class Frog :
    public Animal
{
public:
    Frog() = default;
    Frog(const std::string& n, const std::string& s, const double w, const std::string& c)
        : Animal(n, s, w, c) {}
    void eat() override;
    void sound() override;
};
