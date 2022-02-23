#include "ChiTietDon.h"

ChiTietDon::ChiTietDon()
{
	weight = price = 0.0;
}
ChiTietDon::ChiTietDon(string name)
{
	ID = name;
}
ChiTietDon::~ChiTietDon(){}

void ChiTietDon::nhapChiTiet()
{
	ChiTietMay::nhapChiTiet();

	cout << "Nhap khoi luong: ";
	cin >> weight;
	cout << "Nhap gia thanh: ";
	cin >> price;
	cin.ignore();
}

void ChiTietDon::themChiTiet(ChiTietMay*){}

void ChiTietDon::xuatChiTiet()
{
	cout << "CT Don: " + this->ID
		<< " W = " << this->getWeight()
		<< "  P = " << this->getPrice() << endl;
}

bool ChiTietDon::timChiTiet(string key)
{
	if (key == this->ID)
	{
		this->xuatChiTiet();
		return true;
	}
	return false;
}

double ChiTietDon::getWeight()
{
	return weight;
}

double ChiTietDon::getPrice()
{
	return price;
}