#include "File.h"

File::File()
{
	size = 0.0;
}
File::File(string name)
{
	this->name = name;
}
File::~File(){}

void File::inputSize(double size)
{
	this->size = size;
}

void File::output()
{
	cout << name << "  ";
	cout << "size: " << size << endl;
}

void File::print()
{
	this->output();
}

double File::getSize()
{
	return size;
}

int File::search(string key)
{
	if (key == this->name)
	{
		this->output();
		return 1;
	}
	return 0;
}

bool File::checkFolder()
{
	return false;
}