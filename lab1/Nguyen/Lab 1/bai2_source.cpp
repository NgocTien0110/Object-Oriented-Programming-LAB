#include "bai2.h"

ThoiGian::ThoiGian() {
	giay = 0;
	phut = 0;
	gio = 0;
}

ThoiGian::~ThoiGian() {
	cout << "Xoa doi tuong thanh cong" << endl;
}

ThoiGian::ThoiGian(int value) {
	value %= 86400;
	gio = value / 3600;
	phut = (value % 3600) / 60;
	giay = value % 60;
}

void ThoiGian::Xuat() {
	cout << "Thoi gian: " << gio << ":" << phut << ":" << giay << endl;
}