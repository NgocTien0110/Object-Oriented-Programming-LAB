#pragma once
#include "HinhHoc2D.h"
#include "Diem.h"

class HinhTamGiac: public HinhHoc2D
{
private:
	Diem a, b, c;
	double ab, ac, bc;
public:
//	bool checkHinh();
	void nhap();
	void xuat();
	double dienTich();
	double chuVi();
	bool catTrucHoanh();
};

