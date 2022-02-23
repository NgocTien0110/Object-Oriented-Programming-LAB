#include <iostream>
#include <string>

using namespace std;

class CFraction
{
private:
    int nu, de;

public:
    CFraction() : nu(0), de(1)
    {
    }
    CFraction(int nu, int de)
    {
        this->nu = nu;
        this->de = de;
    }
    operator string()
    {
        string s;
        s += to_string(nu) + "/" + to_string(de);
        return s;
    }
    CFraction &operator++()
    {
        nu += de;
        return *this;
    }
    CFraction operator++(int)
    {
        CFraction p(*this);
        nu += de;
        return p;
    }
    bool operator==(const CFraction &other)
    {
        return nu * other.de == de * other.nu;
    }
    bool operator!=(const CFraction &other)
    {
        return nu * other.de != de * other.nu;
    }
    bool operator<(const CFraction &other)
    {
        return nu * 1.0 / de < other.nu * 1.0 / other.de;
    }
};

int main()
{
    CFraction a[] = {CFraction(2, 3), CFraction(1, 2), CFraction(1, 3), CFraction(4, 3)};
    for (int i = 0; i < 4; i++)
        cout << string(a[i]) << " ";
}
