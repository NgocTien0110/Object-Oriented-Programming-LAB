#pragma once
#include "Component.h"

class File: public Component
{
private:
	double size;
public:
	File();
	File(string);
	~File();

	void inputSize(double size);
	void output();
	void print();
	double getSize();
	int search(string);

	bool checkFolder();
};

