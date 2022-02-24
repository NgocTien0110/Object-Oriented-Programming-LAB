#include"Header.h"

int main()
{
	SinhVien sv1("20127659","Nguyen Quoc Tuan"); //Constructor voi 2 paramaters
	SinhVien sv2(sv1); //Copy constructor
	SinhVien sv3;
	SinhVien sv4;
	sv4 = sv2; //Operator=

	cout << sv1 << endl << sv2 << endl << sv3 << endl << sv4 << endl;
	cout << "So luong sinh vien la:" << SinhVien::SoLuongSV(); //Xuat So luong SV  
	return 0;
}