#pragma once
#include <iostream>
using namespace std;

class NhanVien
{
protected:
	string name;
	string address;
public:
	NhanVien();
	NhanVien(const string& name, const string& address);
	virtual ~NhanVien();

	virtual bool excellence() = 0;
	virtual void display() = 0;
};

