#include "NhanVienSanXuat.h"

NhanVienSanXuat::NhanVienSanXuat() : NhanVien()
{
	this->product = 0.0;
}
NhanVienSanXuat::~NhanVienSanXuat(){}

double NhanVienSanXuat::payroll()
{
	return this->product * 20000.0;
}

void NhanVienSanXuat::input()
{
	NhanVien::input();
	cout << "Nhap so luong san pham: ";
	cin >> product;
}

void NhanVienSanXuat::print()
{
	NhanVien::print();
	cout << "Luong: " << this->payroll() << endl;
}
