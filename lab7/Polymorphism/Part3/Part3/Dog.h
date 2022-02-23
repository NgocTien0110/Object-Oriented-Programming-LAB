#pragma once
#include "Mammal.h"
class Dog : public Mammal
{
public:
	Dog();
	~Dog();

	void move() const;
	void speak() const;
};


