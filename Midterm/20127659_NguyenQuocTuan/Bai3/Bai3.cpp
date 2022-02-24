#include"Header.h"

int main()
{
	PhanSo ps;
	PhanSo ps1(200);
	PhanSo ps2(6, 8);
	PhanSo ps3 = ps1 + ps2;
	PhanSo ps4 = 150 + ps2;
	PhanSo ps5 = ps1 - ps2;
	PhanSo ps6 = 225 - ps2;

	cout << ps << endl << ps1 << endl << ps2 << endl;
	cout << ps3 << endl << ps4 << endl << ps5 << endl;
	cout << ps6;
	return 0;
}