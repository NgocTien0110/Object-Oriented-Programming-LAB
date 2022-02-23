#include "ChiTietMay.h"
#include "ChiTietDon.h"
#include "ChiTietPhuc.h"

class CoMay
{
private:
	vector<ChiTietMay*> dsChiTiet;
public:
	CoMay();
	~CoMay();

	void nhapChiTiet();
	void xuatChiTiet();
	void timChiTiet();

	ChiTietMay* themCT();
	double tongTrongLuong();
	double tongGiaThanh();

};