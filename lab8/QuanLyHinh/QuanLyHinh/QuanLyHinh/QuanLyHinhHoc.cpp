#include "QuanLyHinhHoc.h"

QuanLyHinhHoc::QuanLyHinhHoc()
{
	pShape.resize(0);
}

QuanLyHinhHoc::~QuanLyHinhHoc()
{
	if (!pShape.empty())
	{
		for (vector<Shape*> ::iterator i = pShape.begin(); i != pShape.end(); i++)
			delete (*i);
	}
}

void QuanLyHinhHoc::AddHinh(Shape* pSh)
{
	pShape.push_back(pSh);
}

void QuanLyHinhHoc::xuat()
{
	if (!pShape.empty())
	{
		for (vector<Shape*> ::iterator i = pShape.begin(); i != pShape.end(); i++)
			(*i)->print();
	}
}