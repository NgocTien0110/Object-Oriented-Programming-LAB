#pragma once
#include <iostream>

using namespace std;

class SoPhuc1
{
protected:
	double thuc;
	double ao;
public:
	SoPhuc1();
	SoPhuc1(const double&);
	SoPhuc1(const double&, const double&);
	~SoPhuc1();

	void nhap();
	string xuat();

};