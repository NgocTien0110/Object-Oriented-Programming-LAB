#include "Mammal.h"

Mammal::Mammal()
	: itsAge(1)
{
	cout << "Mamal constructor..." << endl;
}
Mammal::~Mammal()
{
	cout << "Mammal destructor..." << endl;
}

void Mammal::move() const
{
	cout << "Mammal moves a step!" << endl;
}

void Mammal::speak() const
{
	cout << "What does a mammal speak? Mammilian!" << endl;
}


