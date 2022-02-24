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

	int n;
	cout << "nhap so luong mang: ";
	cin >> n;
	SoNguyen *a = new SoNguyen[n];
	
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << endl;

	cout << "So nguyen nho nhat: " << SoNguyen::MinInt() << endl;

	return 0;
}