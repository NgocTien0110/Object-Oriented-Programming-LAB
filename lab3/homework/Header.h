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

    friend bool operator<=(const ThoiGian &, const ThoiGian &);
    friend ThoiGian operator+(const ThoiGian &, const ThoiGian &);
    friend ThoiGian operator-(const ThoiGian &, const ThoiGian &);
    friend ostream &operator<<(ostream &, const ThoiGian &);
};
