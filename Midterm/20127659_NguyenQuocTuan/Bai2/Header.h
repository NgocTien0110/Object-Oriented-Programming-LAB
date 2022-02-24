#include<iostream>
using namespace std;

class SoNguyen
{
private:
	int v;
	static SoNguyen minValue;
public:
	SoNguyen();
	SoNguyen(int val);
	int getValue();
	bool operator>(const SoNguyen& sn);
	bool operator<(const SoNguyen& sn);
	friend istream& operator>>(istream& is, SoNguyen& sn);
	friend ostream& operator<<(ostream& os, const SoNguyen& sn);
	SoNguyen minSoNguyenInArray();
};