#pragma once
#include "NhanVien.h"

class NhanVienCongNhat: public NhanVien
{
private:
	double workingDay;
public:
	NhanVienCongNhat();
	~NhanVienCongNhat();

	void input();
	void print();

	double payroll();
};

