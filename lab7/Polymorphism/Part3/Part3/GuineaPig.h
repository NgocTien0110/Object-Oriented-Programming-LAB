#pragma once
#include "Mammal.h"

class GuineaPig : public Mammal
{
public:
	GuineaPig();
	~GuineaPig();

	void move() const;
	void speak() const;
};

