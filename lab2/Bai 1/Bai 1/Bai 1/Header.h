#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Diem
{
	double dtb;
	double toan, li, hoa;
};

class HocSinh
{
private:
	string name;
	Diem point;
	int mssv;
	
	static int sl;
	static HocSinh DTBMax;
public:
	static string HSDiemTBCaoNhat() ;
	
	HocSinh();
	HocSinh(const string&, const double&, const double&, const double&);
	~HocSinh();

	void DatHoTen(const string&);
	void GanDiem(const double&, const double&, const double&);
	
	friend ostream& operator<<(ostream& os, const HocSinh&);
};

