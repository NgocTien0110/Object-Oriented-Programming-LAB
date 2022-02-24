#include"Header.h"

int SinhVien::sl = 0;

SinhVien::SinhVien() 
{
	this->sl++;
}

SinhVien::SinhVien(const char* mssv, const char* hoten) 
{
	this->mssv = (char*)mssv;
	this->hoten = (char*)hoten;
	this->sl++;
}

SinhVien::SinhVien(const SinhVien& sv) 
{
	this->mssv = sv.mssv;
	this->hoten = sv.hoten;
	this->sl++;
}

SinhVien::~SinhVien() 
{
	this->sl--;
}

const SinhVien& SinhVien::operator=(const SinhVien& sv) 
{
	this->mssv = sv.mssv;
	this->hoten = sv.hoten;
	return *this;
}


int SinhVien::SoLuongSV() 
{
	return sl;
}
ostream& operator<<(ostream& os, const SinhVien& sv) 
{
	return os << "SV: " << sv.hoten << ", MS: " << sv.mssv;
}
