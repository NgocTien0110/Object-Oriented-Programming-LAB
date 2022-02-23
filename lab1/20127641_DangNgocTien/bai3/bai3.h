#include <iostream>
#include <string>
using namespace std;

class NgayThang
{
private:
    int ngay, thang, nam;

public:
    NgayThang()
    {
        this->ngay = this->thang = this->nam = 0;
    }
    NgayThang(int ngay, int thang, int nam)
    {
        this->ngay = ngay;
        this->thang = thang;
        this->nam = nam;
    }
    ~NgayThang() {}

    void setDate(int ngay, int thang, int nam)
    {
        this->ngay = ngay;
        this->thang = thang;
        this->nam = nam;
    }
    void setDate(NgayThang date)
    {
        this->ngay = date.ngay;
        this->thang = date.thang;
        this->nam = date.nam;
    }
    int getNgay()
    {
        return ngay;
    }
    int getThang()
    {
        return thang;
    }
    int getNam()
    {
        return nam;
    }
};

class SinhVien
{
private:
    string MSSV;
    string HoTen;
    NgayThang date;
    float DLT, DTH;

public:
    SinhVien()
    {
        this->MSSV = "xxxxxxx";
        this->HoTen = "xxxx";
        this->DTH = this->DLT = 0;
    }
    SinhVien(string MSSV)
    {
        this->MSSV = MSSV;
        this->HoTen = "xxxx";
        this->DTH = this->DLT = 0;
    }
    SinhVien(string MSSV, string HoTen, float DLT, float DTH)
    {
        this->MSSV = MSSV;
        this->HoTen = HoTen;
        this->DLT = DLT;
        this->DTH = DTH;
    }
    SinhVien(string MSSV, string HoTen, float DLT, float DTH, int ngay, int thang, int nam)
    {
        this->MSSV = MSSV;
        this->HoTen = HoTen;
        this->date.setDate(ngay, thang, nam);
        this->DLT = DLT;
        this->DTH = DTH;
    }
    SinhVien(string MSSV, string HoTen, float DLT, float DTH, NgayThang date)
    {
        this->MSSV = MSSV;
        this->HoTen = HoTen;
        this->date.setDate(date);
        this->DLT = DLT;
        this->DTH = DTH;
    }
    SinhVien(SinhVien &sv)
    {
        this->MSSV = sv.MSSV;
        this->HoTen = sv.HoTen;
        this->date.setDate(sv.date);
        this->DLT = sv.DLT;
        this->DTH = sv.DTH;
    }

    ~SinhVien() {}

    void Xuat()
    {
        string ngay = to_string(date.getNgay());
        if (ngay == "0")
            ngay = "xx";
        string thang = to_string(date.getThang());
        if (thang == "0")
            thang = "xx";
        string nam = to_string(date.getNam());
        if (nam == "0")
            nam = "xxxx";

        cout << "MSSV: " << MSSV << ", Ho Ten: " << HoTen
             << ", Ngay Sinh: " << ngay << "/" << thang << "/" << nam
             << ", DLT: " << DLT << ", DTH: " << DTH << endl;
    }
};