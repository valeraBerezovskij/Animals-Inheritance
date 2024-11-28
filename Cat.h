#pragma once
#include "Animal.h"
class Cat :
    public Animal
{
public:
    Cat() = default;
    Cat(const std::string& n, const std::string& s, const double w, const std::string& c)
        : Animal(n, s, w, c) {}
    void eat() override;
    void sound() override;
};

