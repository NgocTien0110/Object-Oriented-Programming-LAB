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

    SoNguyenLon operator+(const SoNguyenLon &);
    SoNguyenLon operator-(const SoNguyenLon &);
    friend SoNguyenLon operator+(const int &, const SoNguyenLon &);
    friend SoNguyenLon operator-(const int &, const SoNguyenLon &);
    friend ostream &operator<<(ostream &, const SoNguyenLon &);
};