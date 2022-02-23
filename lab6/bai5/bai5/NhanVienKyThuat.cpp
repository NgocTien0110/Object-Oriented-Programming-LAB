#include "NhanVienKyThuat.h"

NhanVienKyThuat::NhanVienKyThuat() 
	: NhanVien(), certificate(""), creative(0) {}
NhanVienKyThuat::NhanVienKyThuat(const string& name, const string& address, const string& certificate, const int& creative)
	: NhanVien(name,address)
{
	this->certificate = certificate;
	this->creative = creative;
}
NhanVienKyThuat::~NhanVienKyThuat(){}

bool NhanVienKyThuat::excellence()
{
	return (creative >= 6) ? true : false;
}

void NhanVienKyThuat::display()
{
	cout << name << " <" << address << "> [Nganh: "
		<< certificate << "], sang tao: "
		<< creative << endl;
}

