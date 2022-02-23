#include "QuanLyHinhHocPhang.h"

QuanLyHinhHocPhang::QuanLyHinhHocPhang()
{
	pShape.resize(0);
}
QuanLyHinhHocPhang::~QuanLyHinhHocPhang()
{
	if (!pShape.empty())
	{
		for (vector<Shape*> ::iterator i = pShape.begin(); i != pShape.end(); i++)
			if (*i)
				delete (*i);
	}
}

void QuanLyHinhHocPhang::AddHinh(Shape* pSh)
{
	pShape.push_back(pSh);
}

double QuanLyHinhHocPhang::TongDienTich()
{
	double total = 0;
	if (!pShape.empty())
	{
		for (vector<Shape*> ::iterator i = pShape.begin(); i != pShape.end(); i++)
			if (*i)
				total += (*i)->getArea();
	}
	return total;
}


double QuanLyHinhHocPhang::TongChuVi()
{
	double total = 0;
	if (!pShape.empty())
	{
		for (vector<Shape*> ::iterator i = pShape.begin(); i != pShape.end(); i++)
			if (*i)
				total += (*i)->getCirc();
	}
	return total;
}
