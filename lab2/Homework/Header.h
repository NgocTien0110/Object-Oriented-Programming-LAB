#include <iostream>
#include <string>

using namespace std;

class SoNguyenLon
{
private:
    string sn;
    static SoNguyenLon max;

public:
    static string SNLMax();
    SoNguyenLon();
    SoNguyenLon(const int &x);
    SoNguyenLon(const int &x, const int &n);
    ~SoNguyenLon();
    string xoa0(SoNguyenLon x);
    SoNguyenLon operator+(const SoNguyenLon &);
    SoNguyenLon operator-(const SoNguyenLon &);
    friend SoNguyenLon operator+(const int &, const SoNguyenLon &);
    friend SoNguyenLon operator-(const int &, const SoNguyenLon &);
    friend ostream &operator<<(ostream &, const SoNguyenLon &);
};

string findMax(const string &a, const string &b)
{
    if (a.size() > b.size())
        return a;
    else if (b.size() > a.size())
        return b;
    else
    {
        for (int i = a.size(); i > 0; i--)
        {
            if (a[i] > b[i])
                return a;
            else if (a[i] < b[i])
                return b;
        }
        return a;
    }
}

string xoa0(string x)
{
    int n = 0;
    string res = "";

    while (x[n] == '0')
        n++;

    for (int i = n; i < x.size(); i++)
        res += x[i];

    return res;
}

SoNguyenLon::SoNguyenLon()
{
    sn = "0";

    max.sn = findMax(max.sn, "0");
}
SoNguyenLon::SoNguyenLon(const int &x)
{
    sn = to_string(x);
    max.sn = findMax(max.sn, sn);
}
SoNguyenLon::SoNguyenLon(const int &x, const int &n)
{
    string temp = to_string(x);
    for (int i = 0; i < n; i++)
    {
        sn += temp;
    }
    max.sn = findMax(max.sn, sn);
}
SoNguyenLon::~SoNguyenLon() {}

string cong(string a, string b)
{
    string sum = "";
    int rem = 0;
    while (a.size() > b.size())
    {
        b = "0" + b;
    }
    while (a.size() < b.size())
    {
        a = "0" + a;
    }
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int cong = int(a[i] - '0') + int(b[i] - '0') + rem;
        rem = cong / 10;
        sum = to_string(cong % 10) + sum;
    }
    if (rem > 0)
    {
        sum = to_string(rem) + sum;
    }
    return sum;
}
string tru(string a, string b)
{
    string sub = "";
    int rem = 0;
    bool check = false;
    if (findMax(a, b) == b)
    {
        swap(a, b);
        check = true;
    }

    while (a.size() > b.size())
    {
        b = "0" + b;
    }

    for (int i = a.size() - 1; i >= 0; i--)
    {
        int tru = int(a[i] - '0') - int(b[i] - '0') - rem;
        if (tru < 0)
        {
            sub = to_string(tru + 10) + sub;
            rem = 1;
        }
        else
        {
            sub = to_string(tru) + sub;
            rem = 0;
        }
    }
    if (check)
        return "-" + sub;
    else
        return sub;
}

SoNguyenLon SoNguyenLon::operator+(const SoNguyenLon &x)
{
    SoNguyenLon sum;
    sum.sn = cong(sn, x.sn);
    return sum;
}
SoNguyenLon SoNguyenLon::operator-(const SoNguyenLon &x)
{
    SoNguyenLon sub;
    sub.sn = tru(sn, x.sn);
    return sub;
}

SoNguyenLon operator+(const int &x, const SoNguyenLon &snl)
{
    string temp = to_string(x);
    SoNguyenLon sum;
    sum.sn = cong(snl.sn, temp);
    return sum;
}
SoNguyenLon operator-(const int &x, const SoNguyenLon &snl)
{
    string temp = to_string(x);
    SoNguyenLon sub;
    sub.sn = tru(temp, snl.sn);
    return sub;
}
ostream &operator<<(ostream &os, const SoNguyenLon &x)
{
    os << x.sn;
    return os;
}

string SoNguyenLon::SNLMax()
{
    return max.sn;
}

SoNguyenLon SoNguyenLon::max{};