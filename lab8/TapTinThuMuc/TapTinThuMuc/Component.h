#pragma once
#include <iostream>

using namespace std;

class Component
{
protected:
	string name;
public:
	virtual double getSize() = 0;
	virtual int search(string) = 0;
	virtual void print()=0;
	virtual void output() = 0;

	virtual bool checkFolder() = 0;
};

