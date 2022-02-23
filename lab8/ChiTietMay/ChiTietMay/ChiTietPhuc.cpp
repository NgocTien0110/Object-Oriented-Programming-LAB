#include "ChiTietPhuc.h"

string ChiTietPhuc::s = "";

ChiTietPhuc::ChiTietPhuc() 
{
	ChiTietCon.resize(0);
}
ChiTietPhuc::ChiTietPhuc(string name)
{
	ID = name;
	ChiTietCon.resize(0);
}
ChiTietPhuc::~ChiTietPhuc()
{
	if (!ChiTietCon.empty())
	{
		for (vector<ChiTietMay*> ::iterator i = ChiTietCon.begin(); i != ChiTietCon.end(); i++)
			delete (*i);
	}
}

void ChiTietPhuc::nhapChiTiet()
{
	ChiTietMay::nhapChiTiet();
}

void ChiTietPhuc::themChiTiet(ChiTietMay* m)
{
	ChiTietCon.push_back(m);
}

void ChiTietPhuc::xuatChiTiet()
{
	string t = s;
	s += "\t";
	cout << "CT Phuc: " + this->ID
		<< " Tong trong luong = " << this->getWeight()
		<< "  Tong gia thanh = " << this->getPrice() << endl;

	cout << s << "Gom co: " << endl;
	for (ChiTietMay* i : ChiTietCon)
	{
		cout << s;
		(*i).xuatChiTiet();
	}

	s = t;
}

bool ChiTietPhuc::timChiTiet(string key)
{
	if (key == this->ID)
	{
		this->xuatChiTiet();
		return true;
	}
	else
	{
		for (ChiTietMay* i : ChiTietCon)
			if (i->timChiTiet(key) == true)
				return true;
		return false;
	}
}

double ChiTietPhuc::getWeight()
{
	double total = 0.0;
	for (ChiTietMay* i : ChiTietCon)
		total += i->getWeight();
	return total * 1.1;
}

double ChiTietPhuc::getPrice()
{
	double total = 0.0;
	for (ChiTietMay* i : ChiTietCon)
		total += i->getPrice();
	return total * 1.2;
}