#pragma once
#include "Component.h"
#include <vector>
class Folder: public Component
{
private:
	vector<Component*> SubFolder;
	static string s;
	
public:
	Folder();
	Folder(string);
	~Folder();

	void add(Component*);
	void output();
	void print();
	double getSize();
	int search(string);

	bool checkFolder();

	int SoLuongFile();
	int SoLuongFolder();

};

