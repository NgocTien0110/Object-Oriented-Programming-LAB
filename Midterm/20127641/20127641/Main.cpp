#include "Header.h"

int main()
{
	SinhVien sv1("20127641", "Dang Ngoc Tien");
	SinhVien sv2(sv1);
	SinhVien sv3 = sv1;

	cout << sv1 << endl;
	cout << sv2 << endl;
	cout << sv3 << endl;

	cout << "So luong sinh vien: " << SinhVien::SoLuongSV() << endl;

	return 0;
}