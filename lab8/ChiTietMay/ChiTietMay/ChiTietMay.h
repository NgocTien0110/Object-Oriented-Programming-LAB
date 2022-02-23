#pragma once
#include <iostream>
#include <string>

using namespace std;

class ChiTietMay
{
protected:
	string ID;
public:
	string getID();
	virtual double getWeight() = 0;
	virtual double getPrice() = 0;

	virtual void nhapChiTiet();
	virtual void themChiTiet(ChiTietMay*)=0;
	virtual void xuatChiTiet() = 0;

	virtual bool timChiTiet(string) = 0;
};

