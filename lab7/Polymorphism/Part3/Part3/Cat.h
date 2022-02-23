#pragma once
#include "Mammal.h"

class Cat : public Mammal
{
public:
	Cat();
	~Cat();

	void move() const;
	void speak() const;
};

