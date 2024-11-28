#include "Animal.h"

void Animal::input() {
	std::cout << "Enter the name:";
	std::cin >> name;
	std::cout << "Enter the species:";
	std::cin >> species;
	std::cout << "Enter the weight:";
	std::cin >> weight;
	std::cout << "Enter the continent:";
	std::cin >> continent;
}

void Animal::print() {
	std::cout << "Name:"       << name      << std::endl;
	std::cout << "Species :"   << species   << std::endl;
	std::cout << "Weight: "    << weight    << std::endl;
	std::cout << "Continent: " << continent << std::endl;
}