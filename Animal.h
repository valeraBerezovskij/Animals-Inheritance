#pragma once
#include<iostream>

class Animal
{
protected:
	std::string name;
	std::string species;
	double weight;
	std::string continent;
public:
	Animal(const std::string& n, const std::string& s, const double w, const std::string& c)
		: name(n), species(s), weight(w), continent(c) {}
	Animal() = default;	 
	void input();
	void print();
	void eat();
	void sound();
};

