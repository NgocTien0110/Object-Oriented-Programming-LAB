#pragma once
#include "Diem.h"
#include "HinhHoc2D.h"
#define PI 3.14

class HinhTron: public HinhHoc2D
{
private:
	Diem o;
	double r;
public:
	//	bool checkHinh();
	void nhap();
	void xuat();
	double dienTich();
	double chuVi();
	bool catTrucHoanh();
};

