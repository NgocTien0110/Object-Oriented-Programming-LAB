#include <iostream>
#include <cmath>
using namespace std;

class HocSinh
{
private:
    string name;
    float m1, m2, m3;
    float dtb;
    int id;
    static int sl;
    static HocSinh HocSinhDatDiemDTBCaoNhat;

public:
    static string HSDiemTBCaoNhat();
    HocSinh()
    {
        sl++;
        id = sl;
    }
    HocSinh(string hoten, int mon1, int mon2, int mon3)
    {
        name = hoten;
        m1 = mon1;
        m2 = mon2;
        m3 = mon3;
        sl++;
        id = sl;
        if (dtb > HocSinhDatDiemDTBCaoNhat.dtb)
        {
            HocSinhDatDiemDTBCaoNhat.id = id;
            HocSinhDatDiemDTBCaoNhat.name = name;
            HocSinhDatDiemDTBCaoNhat.dtb = dtb;
        }
    }
    void DatHoTen(string hoten)
    {
        name = hoten;
    }
    void GanDiem(int mon1, int mon2, int mon3)
    {
        m1 = abs(mon1);
        m2 = abs(mon2);
        m3 = abs(mon3);
        dtb = (abs(mon1) + abs(mon2) + abs(mon3)) / 3;

        if (dtb > HocSinhDatDiemDTBCaoNhat.dtb)
        {
            HocSinhDatDiemDTBCaoNhat.id = id;
            HocSinhDatDiemDTBCaoNhat.name = name;
            HocSinhDatDiemDTBCaoNhat.dtb = dtb;
        }
    }

    void Xuat()
    {
        cout << "HS: " << name
             << ", MS: " << id
             << ", DTB: " << dtb;
    }
};

string HocSinh::HSDiemTBCaoNhat()
{
    return "HS: " + HocSinhDatDiemDTBCaoNhat.HoTen + ", MS: " + to_string(HocSinhDatDiemDTBCaoNhat.MSSV) + ", DTB: " + to_string(HocSinhDatDiemDTBCaoNhat.DiemTrungBinh);
}

int HocSinh::sl = 1363001;