#pragma once
#include "NhanVien.h"

class NhanVienThuKy: public NhanVien
{
private:
	string certificate;
	int report;
public:
	NhanVienThuKy();
	NhanVienThuKy(const string& name, const string& address, const string& certificate, const int& report);
	~NhanVienThuKy();

	bool excellence();
	void display();
};

