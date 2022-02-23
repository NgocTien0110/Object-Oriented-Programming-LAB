#include "Header.h"

int main()
{
	// PS1
	PS1 ps1, ps2, ps3;

	cout << "nhap phan so a:" << endl;
	ps1.nhapPS();
	//cout << ps1.inPS() << endl;

	cout << "\nnhap phan so b: " << endl;
	ps2.nhapPS();
	//cout << ps2.inPS() << endl;

	ps3 = ps1 + ps2;
	cout << ps3.inPS() << " = " << ps1.inPS() << " + " << ps2.inPS() << endl;


	// PS2
	PS2 p1, p2;

	cout << endl;
	cout << "nhap ps1: " << endl;
	cin >> p1;

	cout << "\nnhap ps2: " << endl;
	cin >> p2;

	cout << endl;
	if (p1 > p2)
		cout << p1 << " > " << p2 << endl;
	if (p1 < p2)
		cout << p1 << " < " << p2 << endl;

	return 0;
}