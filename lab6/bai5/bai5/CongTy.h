#pragma once
#include <vector>
#include "NhanVienKyThuat.h"
#include "NhanVienThuKy.h"

class CongTy
{
private:
	vector<NhanVien*> pdsNhanVien;
public:
	CongTy();
	~CongTy();

	void ThemNhanVien(NhanVien*);
	void DanhSachNV(ostream&);
	void DanhSachNVXuatSac(ostream&);
};

