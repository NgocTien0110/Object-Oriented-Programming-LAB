#pragma once
class Shape
{
public:
	Shape();
	~Shape();

	virtual void input() = 0;
	virtual void print() = 0;
};

