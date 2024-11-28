#pragma once
#include "Animal.h"

class Elephant :
    public Animal
{
public:
    Elephant() = default;
    Elephant(const std::string& n, const std::string& s, const double w, const std::string& c)
        : Animal(n, s, w, c) {}
    void eat() override;
    void sound() override;
};

