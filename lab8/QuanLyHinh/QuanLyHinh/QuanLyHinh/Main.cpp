#include "Circle.h"
#include "Square.h"
#include "Retangle.h"
#include "eTriangle.h"
#include "Globular.h"
#include "Cube.h"
#include "QuanLyHinhHoc.h"
int main()
{
	QuanLyHinhHoc ql;

	cout << "Hinh tron: " << endl;
	ql.AddHinh(new HinhTron);
//	ql.AddHinh(new HinhTron(3));

	cout << "Hinh Vuong:" << endl;
	ql.AddHinh(new HinhVuong);
//	ql.AddHinh(new HinhVuong(3));

	cout << "Hinh Chu Nhat: " << endl;
	ql.AddHinh(new HinhChuNhat);
//	ql.AddHinh(new HinhChuNhat(5,4));

	cout << "Hinh Tam Giac Deu: " << endl;
	ql.AddHinh(new HinhTamGiacDeu);
//	ql.AddHinh(new HinhTamGiacDeu(3));

	cout << "Hinh cau: " << endl;
	ql.AddHinh(new HinhCau);
//	ql.AddHinh(new HinhCau(3));

	cout << "Hinh Lap Phuong: " << endl;
	ql.AddHinh(new HinhLapPhuong);
//	ql.AddHinh(new HinhLapPhuong(3));

	cout << "\nDanh sach hinh hoc: " << endl;
	ql.xuat();

	return 0;
}