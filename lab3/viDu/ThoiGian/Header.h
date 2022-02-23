#include <iostream>
using namespace std;

class ThoiGian
{
private:
    int h, m, s;

public:
    ThoiGian();
    ThoiGian(int second);
    ThoiGian(int minute, int second);
    ThoiGian(int hour, int minute, int second);
    ~ThoiGian();

    friend ThoiGian xuly(int second);
    // ThoiGian operator-(const ThoiGian &);
    // ThoiGian operator+(const ThoiGian &);
    // bool operator<=(const ThoiGian &);
    friend bool operator<=(const ThoiGian &, const ThoiGian &);
    friend ThoiGian operator+(const ThoiGian &, const ThoiGian &);
    friend ThoiGian operator-(const ThoiGian &, const ThoiGian &);
    friend ostream &operator<<(ostream &, const ThoiGian &);
};

ThoiGian xuly(int second)
{
    ThoiGian tg;

    if (second < 0)
    {
        tg.h = tg.m = tg.s = 0;
    }
    else if (second < 60)
    {
        tg.h = tg.m = 0;
        tg.s = second;
    }
    else if (second < 3600)
    {
        tg.h = 0;
        tg.m = second / 60;
        tg.s = second % 60;
    }
    else
    {
        tg.h = second / 3600;
        tg.m = second % 3600 / 60;
        tg.s = second - tg.m * 60 - tg.h * 3600;
    }
    return tg;
}

ThoiGian::ThoiGian()
{
    h = m = s = 0;
}
ThoiGian::ThoiGian(int second)
{
    second = (second >= 0) ? second : -second;

    ThoiGian rt = xuly(second);
    h = rt.h;
    m = rt.m;
    s = rt.s;
}
ThoiGian::ThoiGian(int minute, int second)
{
    minute = (minute >= 0) ? minute : -minute;
    second = (second >= 0) ? second : -second;

    int total = minute * 60 + second;
    ThoiGian rt = xuly(total);
    h = rt.h;
    m = rt.m;
    s = rt.s;
}
ThoiGian::ThoiGian(int hour, int minute, int second)
{
    hour = (hour >= 0) ? hour : -hour;
    minute = (minute >= 0) ? minute : -minute;
    second = (second >= 0) ? second : -second;

    int total = hour * 3600 + minute * 60 + second;
    ThoiGian rt = xuly(total);
    h = rt.h;
    m = rt.m;
    s = rt.s;
}

// ThoiGian ThoiGian::operator+(const ThoiGian &tg)
// {
//     ThoiGian rt = *this;
//     int total = (rt.h + tg.h) * 3600 + (rt.m + tg.m) * 60 + rt.s + tg.s;
//     return xuly(total);
// }
// ThoiGian ThoiGian::operator-(const ThoiGian &tg)
// {
//     ThoiGian rt = *this;
//     int total = (rt.h - tg.h) * 3600 + (rt.m - tg.m) * 60 + rt.s - tg.s;
//     return xuly(total);
// }
ThoiGian operator+(const ThoiGian &n, const ThoiGian &tg)
{
    int total = (n.h + tg.h) * 3600 + (n.m + tg.m) * 60 + n.s + tg.s;
    return xuly(total);
}
ThoiGian operator-(const ThoiGian &n, const ThoiGian &tg)
{
    int total = (n.h - tg.h) * 3600 + (n.m - tg.m) * 60 + n.s - tg.s;
    return xuly(total);
}
// bool ThoiGian::operator<=(const ThoiGian &tg)
// {
//     ThoiGian cp = *this;
//     return ((cp.h * 3600 + cp.m * 60 + cp.s) <= (tg.h * 3600 + tg.m * 60 + tg.s)) ? true : false;
// }
bool operator<=(const ThoiGian &tg1, const ThoiGian &tg2)
{
    int total1 = tg1.h * 3600 + tg1.m * 60 + tg1.s;
    int total2 = tg2.h * 3600 + tg2.m * 60 + tg2.s;
    return (total1 <= total2) ? true : false;
}
ostream &operator<<(ostream &os, const ThoiGian &tg)
{
    os << tg.h << ":" << tg.m << ":" << tg.s;
    return os;
}

ThoiGian::~ThoiGian() {}