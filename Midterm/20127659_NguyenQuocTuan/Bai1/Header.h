#include<iostream>
//#include<string>
using namespace std;

class SinhVien
{
private:
	char* mssv;
	char* hoten;
	static int sl;
public:
	SinhVien();
	SinhVien(const char* mssv, const char* hoten);
	SinhVien(const SinhVien& sv);
	const SinhVien& operator=(const SinhVien& sv);
	friend ostream& operator<<(ostream& os, const SinhVien& sv);
	~SinhVien();
	static int SoLuongSV();
};