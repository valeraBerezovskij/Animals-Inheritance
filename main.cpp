#include <iostream>
#include "Animal.h"
#include "Elephant.h"
#include "Dog.h"
#include "Cat.h"
#include "Frog.h"
using namespace std;

int main()
{
	Elephant elephant("Reggin", "Indian elephant", 6.000, "India");
	elephant.sound();
	Dog dog("Chelsi", "Shepherd", 14.1, "Europe");
	dog.sound();
	Cat cat("Toma", "none", 6.4, "Odessa Streets");
	cat.sound();
	Frog frog("Crazy frog", "the craziest", 0.5, "Boloto");
	frog.sound();
}
