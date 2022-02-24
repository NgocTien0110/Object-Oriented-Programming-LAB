#pragma once
#include <iostream>
using namespace std;
class SoNguyen
{
private:
	int v;
public:
	SoNguyen(); 
	SoNguyen(int val); 
	int getValue(); 

	friend bool operator < (const SoNguyen& a, const SoNguyen& b);
	friend bool operator > (const SoNguyen& a, const SoNguyen& b);
	friend bool operator == (const SoNguyen& a, const SoNguyen& b);
	friend istream& operator >> (istream& is, SoNguyen& sn);
	friend ostream& operator << (ostream& os, const SoNguyen& sn);
};

