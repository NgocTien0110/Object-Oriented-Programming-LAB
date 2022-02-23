#include "NhanVien.h"

NhanVien::NhanVien(): name(), address("") {}
NhanVien::NhanVien(const string& name, const string& address)
{
	this->name = name;
	this->address = address;
}
NhanVien::~NhanVien(){}

