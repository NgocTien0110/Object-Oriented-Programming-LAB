#include "Nguoi.h"
#include "NhanVien.h"
int main()
{
	int n;
	cout << "Nhap so luong nhan vien: ";
	cin >> n;

	NhanVien* nv = new NhanVien[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Nhan vien " << i+1 << ": " << endl;
		cin >> nv[i];
		cout << endl;
	}


	for (int i = 0; i < n; i++)
	{
		cout << "Nhan vien " << i+1 << ": " << endl;
		cout << nv[i] << endl;
	}

	delete []nv;
	return 0;
}