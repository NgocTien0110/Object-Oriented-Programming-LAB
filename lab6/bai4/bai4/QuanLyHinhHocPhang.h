#pragma once
#include <vector>
#include "Retangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "RightTrapezoid.h"

using namespace std;

class QuanLyHinhHocPhang 
{
private:
	vector<Shape*> pShape;
public:
	QuanLyHinhHocPhang();
	~QuanLyHinhHocPhang();

	void AddHinh(Shape*);
	double TongDienTich();
	double TongChuVi();
};
