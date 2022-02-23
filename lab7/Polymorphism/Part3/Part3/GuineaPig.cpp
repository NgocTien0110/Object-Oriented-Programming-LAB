#include "GuineaPig.h"

GuineaPig::GuineaPig() :Mammal()
{
	cout << "GuineaPig constuctor..." << endl;
}
GuineaPig::~GuineaPig()
{
	cout << "GuineaPig destructor..." << endl;
}

void GuineaPig::move() const
{
	cout << "GuineaPig moves a step!" << endl;
}

void GuineaPig::speak() const
{
	cout << "What does a Guinea Pig say? Wheep Wheep!" << endl;
}