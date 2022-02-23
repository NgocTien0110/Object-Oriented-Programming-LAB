#pragma once
#include "Mammal.h"

class Horse : public Mammal
{
public:
	Horse();
	~Horse();

	void move() const;
	void speak() const;
};

