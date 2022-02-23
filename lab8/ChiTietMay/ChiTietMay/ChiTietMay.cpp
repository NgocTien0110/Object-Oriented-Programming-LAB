#include "ChiTietMay.h"

void ChiTietMay::nhapChiTiet()
{
	cout << "Nhap ma so may: ";
	getline(cin, ID);
}

string ChiTietMay::getID()
{
	return ID;
}