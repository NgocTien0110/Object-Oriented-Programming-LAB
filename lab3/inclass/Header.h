#include <iostream>
using namespace std;

class Ngay
{
private:
    int d, m, y;
    static int arrNgayCuaThang[][13];
    static bool NamNhuan(const int&);

public:
  
    Ngay();
    Ngay(const int &);
    Ngay(const int &, const int &, const int &);
    ~Ngay();

    int toDay(Ngay a);
    Ngay xuly(int n);
    Ngay xuly(int ngay, int thang, int nam);

    Ngay operator+(const Ngay &);
    Ngay operator-(  Ngay d);
    friend Ngay operator+(const int &, const Ngay &);
    friend Ngay operator-(const int &, Ngay d );
    friend bool operator>(const Ngay &, const Ngay &);
    friend ostream &operator<<(ostream &os, const Ngay &);
};


