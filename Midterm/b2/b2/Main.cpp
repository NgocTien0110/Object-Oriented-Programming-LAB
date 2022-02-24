#include"Header.h"

int main()
{

	SoNguyen sn1(10);
	SoNguyen sn2(20);
	SoNguyen sn3;

	cout << sn1 << endl << sn2 << endl << sn3 << endl;

	if (sn1 < sn2)
		cout << sn1 << " < " << sn2 << endl;

	if (sn2 > sn1)
		cout << sn2 << " > " << sn1 << endl;


	SoNguyen a[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}

	for (int i = 0; i < 3; i++)
		cout << a[i] << endl;

	cout << "So nguyen nho nhat: " << SoNguyen::MinInt() << endl;

	return 0;
}