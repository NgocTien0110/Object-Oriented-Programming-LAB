#include "QuanLyNhanVien.h"

QuanLyNhanVien::QuanLyNhanVien()
{
	NV.resize(0);
}
QuanLyNhanVien::~QuanLyNhanVien()
{
	for (vector<NhanVien*>::iterator i = NV.begin(); i != NV.end(); i++)
		delete (*i);
}

void QuanLyNhanVien::ThemNV()
{
	int choice = 0;
	cout << "\n1. Nhan Vien San Xuat\n";
	cout << "2. Nhan Vien Cong Nhat\n";
	cout << "3. Nhan Vien Quan Ly\n";
	cout << "Chon: ";

	while (choice > 3 || choice < 1)
		cin >> choice;

	NhanVien* nv;
	if (choice == 1)
	{
		nv = new NhanVienSanXuat;
		nv->input();
		NV.push_back(nv);
	}
	else if (choice == 2)
	{
		nv = new NhanVienCongNhat;
		nv->input();
		NV.push_back(nv);
	}
	else
	{
		nv = new NhanVienQuanLy;
		nv->input();
		NV.push_back(nv);
	}
}

void QuanLyNhanVien::NhapDSNV()
{
	int n;
	cout << "Nhap so luong nhan vien: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		this->ThemNV();
	}
}

int QuanLyNhanVien::soLuongNhanVien()
{
	return NhanVien::quantity;
}

int QuanLyNhanVien::soLuongQuanLy()
{
	return NhanVienQuanLy::quantity;
}

void QuanLyNhanVien::XuatDSNV()
{
	for (vector<NhanVien*> ::iterator i = NV.begin(); i != NV.end(); i++)
		(*i)->print();
}