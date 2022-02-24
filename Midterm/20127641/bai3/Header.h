#include <iostream>
#include <cmath>

using namespace std;

class PhanSo
{
private:
    int numerator;
    int denominator;

public:
    PhanSo();
    PhanSo(int i);
    PhanSo(int nu, int de);

    static unsigned int gcd(unsigned int n1, unsigned int n2);

    friend PhanSo operator+(const PhanSo&, const PhanSo&);
    friend PhanSo operator-(const PhanSo&, const PhanSo&);

    friend ostream& operator<<(ostream&, const PhanSo&);
};
