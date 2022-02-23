#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
	string ID;
	string name;
public:
	static int quantity;

	NhanVien();
	NhanVien(const string& ID, const string& name);
	virtual ~NhanVien();

	virtual void input();
	virtual void print();

	virtual double payroll() = 0;
};

