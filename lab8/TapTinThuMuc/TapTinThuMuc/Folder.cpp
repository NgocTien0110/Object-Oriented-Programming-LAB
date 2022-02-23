#include "Folder.h"

string Folder::s = "";

Folder::Folder()
{
	SubFolder.resize(0);
}
Folder::Folder(string name)
{
	this->name = name;
}
Folder::~Folder()
{
	if (!SubFolder.empty())
	{
		for (vector<Component*>::iterator i = SubFolder.begin(); i != SubFolder.end(); i++)
			delete(*i);
	}
}

void Folder::add(Component* c)
{
	SubFolder.push_back(c);
}

double Folder::getSize()
{
	double total=0;
	for (Component* i : SubFolder)
		total += i->getSize();
	return total;
}

int Folder::SoLuongFolder()
{
	int res = 0;
	if (!SubFolder.empty())
	{
		for (Component* i : SubFolder)
			if (i->checkFolder())
				res++;
	}
	return res;
}

int Folder::SoLuongFile()
{
	int res = 0;
	if (!SubFolder.empty())
	{
		for (Component* i : SubFolder)
			if (!i->checkFolder())
				res++;
	}
	return res;
}

void Folder::output()
{
	cout << "[" << name << "]" << endl;
}

void Folder::print()
{
	string t = s;
	s +=  "\t";
	this->output();
	
	for (Component* i : SubFolder)
	{
		cout << s;
		i->print();
	}
	s = t;
}

int Folder::search(string key)
{
	if (key == this->name)
	{
		cout << "[" << name << "] " << "tong kich thuoc: " 
			<<	getSize() << "\nGom co: "
			<< SoLuongFile() << " file, "
			<< SoLuongFolder() << " subFolder." << endl;
		return 1;
	}
	else
	{
		for (Component* i : SubFolder)
			if (i->search(key) == 1)
				return 1;
		return 0;
	}
}

bool Folder::checkFolder()
{
	return true;
}