#pragma once
#include "NhanVien.h"

class NhanVienQuanLy : public NhanVien
{
private:
	double basicSalary;
	double c;
public:
	static int quantity;

	NhanVienQuanLy();
	~NhanVienQuanLy();

	void input();
	void print();

	double payroll();
};

