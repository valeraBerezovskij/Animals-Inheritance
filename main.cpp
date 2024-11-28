#include <iostream>
#include "Animal.h"
#include "Elephant.h"
#include "Dog.h"
#include "Cat.h"
#include "Frog.h"
using namespace std;

int main()
{
	Animal* frog = new Frog;
	frog->eat();
	frog->sound();
}
