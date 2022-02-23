#pragma once
#include "Nguoi.h"


Nguoi::Nguoi() : name(""), address(""), BoD("") {}
Nguoi::Nguoi(const string& name, const string& address, const string& BoD)
{
	this->name = name;
	this->address = address;
	this->BoD = BoD;
}
Nguoi::~Nguoi() {}

istream& operator >> (istream& is, Nguoi& ng)
{
	cout << "Nhap ho va ten: ";
	cin.ignore();
	getline(is, ng.name);
	cout << "Nhap dia chi: ";
	getline(is, ng.address);
	cout << "Nhap ngay sinh: ";
	getline(is, ng.BoD);
	return is;
}
ostream& operator << (ostream& os, const Nguoi& ng)
{
	os << "Ho va ten: " << ng.name << endl;
	os << "Dia chi: " << ng.address << endl;
	os << "Ngay sinh: " << ng.BoD << endl;
	return os;
}