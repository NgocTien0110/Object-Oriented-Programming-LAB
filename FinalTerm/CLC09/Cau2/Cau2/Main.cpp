#include "HinhHoc2D.h"
#include "HinhTamGiac.h"
#include "HinhTron.h"
#include "HinhChuNhat.h"
#include "Diem.h"

int main()
{
	HinhHoc2D* hh;

	int choice;
	do
	{
		cout << "\n1. Hinh tam giac." << endl;
		cout << "2. Hinh tron." << endl;
		cout << "3. Hinh chu nhat." << endl;
		cout << "0. Thoat." << endl;
		cout << "Moi chon: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			hh = new HinhTamGiac;
			hh->nhap();
			hh->xuat();
			
			if (hh->catTrucHoanh())
				cout << "Cat truc hoanh." << endl;
			else
				cout << "Khong cat truc hoanh." << endl;
			break;
		}
		case 2:
		{
			hh = new HinhTron;
			hh->nhap();
			hh->xuat();

			if (hh->catTrucHoanh())
				cout << "Cat truc hoanh." << endl;
			else
				cout << "Khong cat truc hoanh." << endl;
			break;
		}
		case 3:
		{
			hh = new HinhChuNhat;
			hh->nhap();
			hh->xuat();

			if (hh->catTrucHoanh())
				cout << "Cat truc hoanh." << endl;
			else
				cout << "Khong cat truc hoanh." << endl;
			break;
		}
		default:
			break;
		}

	} while (choice != 0);

	return 0;
}