#include "NhanVien.h"

int NhanVien::quantity = 0;

NhanVien::NhanVien()
{
	ID = name = "";
	quantity++;
}
NhanVien::NhanVien(const string& ID, const string& name)
{
	this->ID = ID;
	this->name = name;
	quantity++;
}
NhanVien::~NhanVien(){ 
	quantity--;
}

void NhanVien::input()
{
	cout << "Nhap ten nhan vien: ";
	cin.ignore();
	getline(cin, name);
	cout << "ID nhan vien: ";
	getline(cin, ID);
}
 
void NhanVien::print()
{
	cout << ID << "  " << name << "  ";
}