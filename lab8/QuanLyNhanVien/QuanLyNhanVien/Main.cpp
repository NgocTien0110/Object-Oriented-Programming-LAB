#include "QuanLyNhanVien.h"

int main()
{
	QuanLyNhanVien ABC;

	cout << "Nhap danh sach nhan vien: " << endl;
	ABC.NhapDSNV();	

	cout << "\n Them 1 nhan vien: " << endl;
	ABC.ThemNV();

	system("cls");
	cout << "Danh sach nhan vien: " << endl;
	ABC.XuatDSNV();

	cout << "\nSo luong Nhan Vien: " << ABC.soLuongNhanVien();
	cout << "\nSo luong Nhan Vien Quan Ly: " << ABC.soLuongQuanLy() << endl;
	
	return 0;
}