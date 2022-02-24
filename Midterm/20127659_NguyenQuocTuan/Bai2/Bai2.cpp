#include"Header.h"

int main()
{
	int n;

	do
	{
		cout << "Nhap so luong phan tu (0 <n <= 50) cua Mang So Nguyen:";
		cin >> n;
	} while (n > 50 || n<0); //Neu nguoi dung nhap n <0 hay n>50 thi chay lai vong lap

	SoNguyen* sn = new SoNguyen[n]; //Khoi tao mang So Nguyen gom n phan tu

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i +1 << " :";
		cin >> sn[i];
	}

	cout << "Gia tri nho nhat trong mang so nguyen la: " << sn->minSoNguyenInArray(); //Xuat gia tri nho nhat trong mang So Nguyen

	return 0;
}