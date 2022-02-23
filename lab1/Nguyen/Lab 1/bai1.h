#include <iostream>

using namespace std;

static int soNgay[12]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

class Ngay {
private:
	int ngay;
	int thang;
	int nam;
public:
	Ngay();
	~Ngay();
	Ngay(int value1, int value2, int value3);
	Ngay(int value);
	void Xuat();
};