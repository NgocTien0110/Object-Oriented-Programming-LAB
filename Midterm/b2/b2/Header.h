#include <iostream>
using namespace std;

class SoNguyen
{
private:
	int v;
	static int min;
public:
	static int MinInt();

	SoNguyen();
	SoNguyen(int val); 
	~SoNguyen();

	int getValue(); 
	
	friend bool operator > (const SoNguyen&, const SoNguyen&);
	friend bool operator < (const SoNguyen&, const SoNguyen&);

	friend ostream& operator<< (ostream&, const SoNguyen&);
	friend istream& operator>> (istream&,  SoNguyen&);
};
