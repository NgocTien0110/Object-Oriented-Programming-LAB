#pragma once
#include "NhanVien.h"

class NhanVienKyThuat : public NhanVien
{
private:
	string certificate;
	int creative;
public:
	NhanVienKyThuat();
	NhanVienKyThuat(const string& name, const string& quantity, const string& certificate, const int& address);
	~NhanVienKyThuat();

	bool excellence();
	void display();
};

