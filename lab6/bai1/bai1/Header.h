#include <iostream>
#include <string>
using namespace std;

class PS1
{
protected:
	int tu, mau;
public:
	PS1();
	PS1(int i);
	PS1(int nu, int de);
	static unsigned int gcd(unsigned int n1, unsigned int n2);

	void nhapPS();
	string inPS();
	void toiGian();
	
	friend PS1 operator+(const PS1&, const PS1&);
	//PS1 cong2PS(const PS1&);
};

class PS2: public PS1
{
private:
	char dau;
public:
	friend PS2 operator-(const PS2&, const PS2&);
	friend PS2 operator*(const PS2&, const PS2&);
	friend PS2 operator/(const PS2&, const PS2&);
	
	friend bool operator<(const PS2&, const PS2&);
	friend bool operator<=(const PS2&, const PS2&);
	friend bool operator>(const PS2&, const PS2&);
	friend bool operator>=(const PS2&, const PS2&);
	friend bool operator==(const PS2&, const PS2&);
	friend bool operator!=(const PS2&, const PS2&);

	PS2 operator++();
	PS2 operator--();

	friend ostream& operator << (ostream&, const PS2&);
	friend istream& operator >> (istream&, PS2&);
};