#include "Header.h"

int main()
{
    HocSinh hs1;
    hs1.DatHoTen("Nguyen Van A");
    hs1.GanDiem(7, 8, 10);
    hs1.Xuat();
    cout << endl;

    HocSinh hs2("Tran Thi B", 5, 8, 4.5);
    hs2.Xuat();
    cout << endl;

    HocSinh hs3("Hoang Thi C", -9.5, 8.5, 4.5);
    hs3.Xuat();
    cout << endl;

    HocSinh hs4("Le Van D", 7.5, 9, -10);
    hs4.Xuat();
    cout << endl;

    //"HS: Nguyen Van A, MS: 1363001, DTB: 7.53"
    cout << "Hoc sinh co diem TB cao nhat:" << endl;
    cout << HocSinh::HSDiemTBCaoNhat() << endl;
    return 0;
}