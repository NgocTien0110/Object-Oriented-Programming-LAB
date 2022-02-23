#include "NhanVienThuKy.h"

NhanVienThuKy::NhanVienThuKy()
	: NhanVien(), certificate(""), report(0) {}
NhanVienThuKy::NhanVienThuKy(const string& name, const string& address, const string& certificate, const int& report)
	: NhanVien(name, address)
{
	this->certificate = certificate;
	this->report = report;
}
NhanVienThuKy::~NhanVienThuKy() {}

bool NhanVienThuKy::excellence()
{
	return (report >= 8) ? true : false;
}

void NhanVienThuKy::display()
{
	cout << name << " <" << address << "> [NN: "
		<< certificate << "], bao cao hoan thanh: "
		<< report << endl;
}

