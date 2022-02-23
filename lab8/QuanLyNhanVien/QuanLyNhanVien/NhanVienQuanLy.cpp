#include "NhanVienQuanLy.h"

int NhanVienQuanLy::quantity = 0;

NhanVienQuanLy::NhanVienQuanLy():NhanVien()
{
	basicSalary = c = 0.0;
	quantity++;
}
NhanVienQuanLy::~NhanVienQuanLy()
{
	quantity--;
}

double NhanVienQuanLy::payroll()
{
	return basicSalary * c;
}

void NhanVienQuanLy::input()
{
	NhanVien::input();
	cout << "Nhap luong co ban: ";
	cin >> basicSalary;
	cout << "Nhap he so luong: ";
	cin >> c;
}

void NhanVienQuanLy::print()
{
	NhanVien::print();
	cout << "Luong: " << this->payroll() << endl;
}



