#include "CongTy.h"

CongTy::CongTy() 
{
	pdsNhanVien.resize(0);
}
CongTy::~CongTy()
{
	if (!pdsNhanVien.empty())
	{
		for (vector<NhanVien*> ::iterator i = pdsNhanVien.begin(); i != pdsNhanVien.end(); i++)
			if (*i)
			{
				delete (*i);
			}
	}
}

void CongTy::ThemNhanVien(NhanVien* pNV)
{
	pdsNhanVien.push_back(pNV);
}

void CongTy::DanhSachNV(ostream& os)
{
	if (!pdsNhanVien.empty())
	{
		for (vector<NhanVien*> ::iterator i = pdsNhanVien.begin(); i != pdsNhanVien.end(); i++)
			if (*i)
			{
				(*i)->display();
			}	
	}
}

void CongTy::DanhSachNVXuatSac(ostream& os)
{
	if (!pdsNhanVien.empty())
	{
		for (vector<NhanVien*> ::iterator i = pdsNhanVien.begin(); i != pdsNhanVien.end(); i++)
			if ((*i)->excellence())
			{
				(*i)->display();
			}
	}
}


