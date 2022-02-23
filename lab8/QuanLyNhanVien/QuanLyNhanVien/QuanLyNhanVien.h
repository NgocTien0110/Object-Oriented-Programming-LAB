#pragma once
#include "NhanVien.h"
#include "NhanVienSanXuat.h"
#include "NhanVienCongNhat.h"
#include "NhanVienQuanLy.h"
#include <vector>

class QuanLyNhanVien
{
private:
	vector<NhanVien*> NV;
public:
	QuanLyNhanVien();
	~QuanLyNhanVien();

	void ThemNV();
	void NhapDSNV();
	void XuatDSNV();

	int soLuongNhanVien();
	int soLuongQuanLy();
};

