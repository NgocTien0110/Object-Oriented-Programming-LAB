#pragma once
#include "NhanVien.h"
class NhanVienSanXuat : public NhanVien
{
private:
	int product;
public:
	NhanVienSanXuat();
	~NhanVienSanXuat();

	void input();
	void print();

	double payroll();
};

