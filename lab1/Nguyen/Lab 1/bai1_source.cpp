#include "bai1.h"

Ngay::Ngay() {
	ngay = 1;
	thang = 1;
	nam = 1;
}

Ngay::~Ngay() {
	cout << "Xoa doi tuong thanh cong" << endl;
}

Ngay::Ngay(int value1, int value2, int value3) {
	ngay = (value1 <= 1) ? 1 : ((value1 >= soNgay[value2 - 1]) ? soNgay[value2 - 1] : value1 );
	thang = (value2 <= 1) ? 1 : ((value2 >= 12) ? 12 : value2);
	nam = (value3 <= 1) ? 1 : value3;
}

Ngay::Ngay(int value) {
	ngay = 1;
	thang = 1;
	nam = 1;

	if (value < 1) return;
	
	for (int i = 1, extraDay = 0; value > (365 + extraDay); i++) {
		nam++;
		value -= (365 + extraDay);
		extraDay = ((nam + 1) % 4 == 0) ? 1 : 0;
	}

	for (int i = 1; i < 12; i++) {
		thang = (value <= ((i == 2 && nam % 4 == 0) ? soNgay[i - 1] + 1 : soNgay[i - 1])) ? thang : thang + 1;
		ngay = (thang == i) ? value : 1;
		value = (ngay == value) ? 0 : (value - soNgay[i - 1]);
	}
}

void Ngay::Xuat() {
	cout << "Ngay: " << ngay << "/" << thang << "/" << nam << endl;
}