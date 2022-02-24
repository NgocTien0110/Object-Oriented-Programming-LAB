#pragma once
#include <cmath>
#include <iostream>
using namespace std;

class HinhHoc2D
{
public:
	virtual void nhap() = 0;
	virtual void xuat() = 0;
	virtual double dienTich() = 0;
	virtual double chuVi() = 0;
	virtual bool catTrucHoanh() = 0;
};

