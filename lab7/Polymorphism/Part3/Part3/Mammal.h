#pragma once
#include <iostream>
using namespace std;

class Mammal
{
protected:
	int itsAge;
public:
	Mammal();
	virtual ~Mammal();

	virtual void move() const;
	virtual void speak() const;
};

