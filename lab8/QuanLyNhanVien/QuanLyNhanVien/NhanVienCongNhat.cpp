#include "NhanVienCongNhat.h"

NhanVienCongNhat::NhanVienCongNhat() : NhanVien() 
{
	this->workingDay = 0.0;
}
NhanVienCongNhat::~NhanVienCongNhat(){}

double NhanVienCongNhat::payroll()
{
	return this->workingDay * 50000.0;
}

void NhanVienCongNhat::input()
{
	NhanVien::input();
	cout << "Nhap so ngay lam viec: ";
	cin >> workingDay;
}

void NhanVienCongNhat::print()
{
	NhanVien::print();
	cout << "Luong: " << this->payroll() << endl;
}

