#pragma once
#include <iostream>
#include <string>

using namespace std;

class Nguoi
{
protected:
	string name;
	string address;
	string BoD;
public:
	Nguoi();
	Nguoi(const string& name, const string& address, const string& BoD);
	~Nguoi();

	friend istream& operator >> (istream& is, Nguoi& ng);
	friend ostream& operator << (ostream& os, const Nguoi& ng);
};