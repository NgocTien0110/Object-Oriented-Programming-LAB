#include"Header.h"

SinhVien::SinhVien() 
{
	mssv = new char[1]; 
	mssv[0] = '\0';
	hoten = new char[1];
	hoten[0] = '\0';

	sl++;
}

SinhVien::SinhVien(const char* mssv, const char* hoten)	
{
	this->mssv = new char[strlen(mssv) + 1];
	strcpy_s(this->mssv, strlen(mssv) + 1, mssv);

	this->hoten = new char[strlen(hoten) + 1];
	strcpy_s(this->hoten, strlen(hoten) + 1, hoten);

	sl++;
}

SinhVien::SinhVien(const SinhVien& sv)
{
	this->mssv = new char[strlen(sv.mssv) + 1];
	strcpy_s(this->mssv, strlen(sv.mssv) + 1, sv.mssv);

	this->hoten = new char[strlen(sv.hoten) + 1];
	strcpy_s(this->hoten, strlen(sv.hoten) + 1, sv.hoten);

	sl++;
}

ostream& operator<<(ostream& os, const SinhVien& sv)
{
	os << "MSSV:";
	for (int i = 0; i < strlen(sv.mssv); i++) //Xuat ra cac ky tu cua mssv Sinh Vien
	{
		os << sv.mssv[i];
	}
	os << " Ho ten:";
	for (int i = 0; i < strlen(sv.hoten); i++) //Xuat ra cac ky tu cua Ho ten Sinh Vien
	{
		os << sv.hoten[i];
	}
	return os;
}

const SinhVien& SinhVien::operator=(const SinhVien& sv)
{
	if (this->mssv != nullptr)	//Neu mssv khac nullptr thi ta delete no xong moi gan
		delete this->mssv;
	if (this->hoten != nullptr) //Neu Ho ten khac nullptr thi ta delete no xong moi gan
		delete this->hoten;

	this->mssv = new char[strlen(sv.mssv) + 1];
	strcpy_s(this->mssv, strlen(sv.mssv) + 1, sv.mssv);

	this->hoten = new char[strlen(sv.hoten) + 1];
	strcpy_s(this->hoten, strlen(sv.hoten) + 1, sv.hoten);

	return *this;
}

SinhVien::~SinhVien()
{
	if (this->mssv != nullptr) //Neu Sinh vien co mssv khac nullptr thi ta delete pointer do, khong thi khong can delete
		delete this->mssv;
	if (this->hoten != nullptr)  //Neu Sinh vien co ho ten khac nullptr thi ta delete pointer do, khong thi khong can delete
		delete this->hoten;
}

int SinhVien::sl = 0; //Khoi tao gia tri static sl = 0

int SinhVien::SoLuongSV() //Xuat ra so luong sinh vien
{
	return sl;
}