#pragma once
#include "Diem.h"
#include "HinhHoc2D.h"

class HinhChuNhat:public HinhHoc2D
{
private:
	Diem a, b, c, d;
	double ab, bc, cd, da;
public:
	//	bool checkHinh();
	void nhap();
	void xuat();
	double dienTich();
	double chuVi();
	bool catTrucHoanh();
};

