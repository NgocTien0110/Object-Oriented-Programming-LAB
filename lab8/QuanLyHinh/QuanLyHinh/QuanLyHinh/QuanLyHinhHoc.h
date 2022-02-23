#pragma once
#include "Shape2D.h"
#include "Shape3D.h"
#include <vector>
class QuanLyHinhHoc
{
private:
	vector<Shape*> pShape;
public:
	QuanLyHinhHoc();
	~QuanLyHinhHoc();

	void AddHinh(Shape*);
	void xuat();

};

