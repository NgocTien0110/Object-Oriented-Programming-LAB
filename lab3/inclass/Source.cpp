#include "Header.h"

Ngay Ngay::xuly(int n)
{
    Ngay res;
    res.d = (n > 0) ? n : -n;
    res.m = res.y = 1;
    if (res.d == 0)
    {
        res.d = 1;
        return res;
    }
    int idxN = NamNhuan(res.y);
    while (res.d > arrNgayCuaThang[idxN][res.m])
    {
        res.d -= arrNgayCuaThang[idxN][res.m];
        res.m++;
        if (res.m > 12)
        {
            res.m = 1;
            res.y++;
            idxN = NamNhuan(res.y);
        }
    }
    return res;
}
Ngay Ngay::xuly(int ngay, int thang, int nam)
{
    Ngay res;
    res.y = (nam > 0) ? nam : -nam;
    res.m = (thang > 0) ? thang : -thang;
    if (thang > 12)
    {
        res.y += thang / 12;
        res.m = thang % 12;
    }
    else
        res.m = thang;

    res.d = (ngay > 0) ? ngay : -ngay;
    int idxN = NamNhuan(res.y);
    while (res.d > arrNgayCuaThang[idxN][res.m])
    {
        res.d -= arrNgayCuaThang[idxN][res.m];
        res.m++;
        if (res.m > 12)
        {
            res.m = 1;
            res.y++;
            idxN = NamNhuan(res.y);
        }
    }
    return res;
}

int Ngay::toDay(Ngay a)
{
    int res = a.d;
    int idxN = NamNhuan(a.y);
    a.m--;
    while (a.m != 0 && a.y != 0)
    {
        res += arrNgayCuaThang[idxN][a.m];
        a.m--;
        if (a.m < 1)
        {
            a.m = 12;
            a.y--;
            idxN = NamNhuan(a.y);
        }
    }
    return res + 31;
}

Ngay::Ngay()
{
    d = m = y = 1;
}
Ngay::Ngay(const int &n)
{
    Ngay res = xuly(n);
    d = res.d;
    m = res.m;
    y = res.y;
}
Ngay::Ngay(const int &ngay, const int &thang, const int &nam)
{
    Ngay res = xuly(ngay, thang, nam);
    d = res.d;
    m = res.m;
    y = res.y;
}

Ngay Ngay::operator+(const Ngay &d)
{
    Ngay rt = *this;
    return xuly(rt.d + d.d, rt.m + d.m, rt.y + d.y);
}
Ngay Ngay::operator-(Ngay d)
{
    Ngay rt = *this;
    rt.y = rt.y - d.y;
    if (rt.m > rt.m)
        rt.m -= d.m;
    else
    {
        rt.m = 12 + rt.m - d.m;
        rt.y--;
    }
    rt.d = (rt.d - d.d > 0) ? rt.d - d.d : 1;

    return xuly(rt.d, rt.m, rt.y);
}

Ngay operator+(const int &n, const Ngay &d)
{
    Ngay rt = Ngay(n);
    return rt.xuly(rt.d + d.d, rt.m + d.m - 1, rt.y + d.y - 1);
}
Ngay operator-(const int &n, Ngay d)
{
    Ngay rt = Ngay(n);
    return rt - d;
}

bool operator>(const Ngay &a, const Ngay &b)
{
    if (a.y > b.y)
        return true;
    else if (a.y == b.y && a.m > b.m)
        return true;
    else if (a.y == b.y && a.m == b.m && a.d > b.d)
        return true;
    else
        return false;
}

Ngay::~Ngay() {}

bool Ngay::NamNhuan(const int &n)
{
    return (n % 400 == 0) || (n % 4 == 0 & n % 100 != 0);
}

ostream &operator<<(ostream &os, const Ngay &n)
{
    os << n.d << "/" << n.m << "/" << n.y;
    return os;
}

int Ngay::arrNgayCuaThang[][13] = {{-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                                   {-1, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
