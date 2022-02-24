#include "SoNguyen.h"
#include "MangSoNguyen.h"
#include <algorithm>
int main()
{
	// nhap mang so nguyen
	MangSoNguyen a;
	a.nhapMang();
	//a.xuatMang();

	// xuat phan tu nho nhat mang
	cout << "\nPhan tu nho nhat cua mang la: " << a.min << endl;
	
	// tim kiem so nguyen
	SoNguyen sn;
	cout << "Nhap so nguyen can tim kiem:";
	cin >> sn;

	a.sapXep();
	if (a.binarySearch(sn))
		cout << "Tim thay " << sn << " trong mang." << endl;
	else
		cout << "Khong tim thay " << sn << " trong mang." << endl;

	return 0;
}