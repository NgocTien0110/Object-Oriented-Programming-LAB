#include "Header.h"

using namespace std;

int main()
{
	HocSinh hs1;
	hs1.DatHoTen("Nguyen Van A");
	hs1.GanDiem(7, 8, 10);
	HocSinh hs2("Tran Thi B", 5, 8, 4.5);
	HocSinh hs3("Hoang Thi C", -9.5, 8.5, 4.5);
	HocSinh hs4("Le Van D", 7.5, 9, -10);
	//"HS: Nguyen Van A, MS: 1363001, DTB: 7.53"
	cout << hs1 << endl << hs2 << endl << hs3 << endl << hs4 << endl << endl;
	cout << "Hoc sinh co diem TB cao nhat:" << endl;
	cout << HocSinh::HSDiemTBCaoNhat() << endl;
}