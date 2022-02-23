#include <iostream>
using namespace std;

class Ngay
{
private:
    int d, m, y;
    static int arrNgayCuaThang[][13];
    static bool NamNhuan(const int &);

public:
    Ngay();
    Ngay(const int &);
    Ngay(const int &, const int &, const int &);
    ~Ngay();
    int toDay(Ngay a);
    Ngay xuly(const int &n);
    Ngay xuly(const int &ngay, const int &thang, const int &nam);

    Ngay operator+(const Ngay &);
    Ngay operator-(const Ngay &);

    friend Ngay operator+(const int &, const Ngay &);
    friend Ngay operator-(const int &, Ngay d);
    friend bool operator>(const Ngay &, const Ngay &);
    friend ostream &operator<<(ostream &os, const Ngay &);
};

Ngay Ngay::xuly(const int &n)
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
Ngay Ngay::xuly(const int &ngay, const int &thang, const int &nam)
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
    return res;
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
Ngay Ngay::operator-(const Ngay &d)
{
    Ngay rt = *this;
    rt.y -= d.y;
    if (rt.m < d.m)
    {
        rt.m = 12 + rt.m - d.m;
        rt.y--;
    }
    else
        rt.m -= d.m;
    if (rt.d < d.d)
    {
        rt.m--;
        rt.d = arrNgayCuaThang[NamNhuan(rt.y)][rt.m] + rt.d - d.d;
    }
    else
        rt.d -= d.d;

    return xuly(rt.d, rt.m, rt.y);
}

Ngay operator+(const int &n, const Ngay &d)
{
    Ngay rt = Ngay(n);
    return rt.xuly(rt.d + d.d, rt.m + d.m - 1, rt.y + d.y - 1);
}
Ngay operator-(const int &n, Ngay d)
{
    int sub = n - d.toDay(d);
    return Ngay(sub);
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
