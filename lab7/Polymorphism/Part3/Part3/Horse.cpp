#include "Horse.h"

Horse::Horse() :Mammal()
{
	cout << "Horse constuctor..." << endl;
}
Horse::~Horse()
{
	cout << "Horse destructor..." << endl;
}

void Horse::move() const
{
	cout << "Horse moves a step!" << endl;
}

void Horse::speak() const
{
	cout << "What does a horse say? Ney!" << endl;
}