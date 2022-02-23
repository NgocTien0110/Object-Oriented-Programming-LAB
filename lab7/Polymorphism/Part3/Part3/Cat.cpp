#include "Cat.h"

Cat::Cat() :Mammal()
{
	cout << "Cat constuctor..." << endl;
}
Cat::~Cat()
{
	cout << "Cat destructor..." << endl;
}

void Cat::move() const
{
	cout << "Cat moves a step!" << endl;
}

void Cat::speak() const
{
	cout << "What does a cat say? Meow!" << endl;
}
