#pragma once
#include "ChiTietMay.h"

class ChiTietDon: public ChiTietMay
{
private:
	double weight;
	double price;
public:
	ChiTietDon();
	ChiTietDon(string name);
	~ChiTietDon();

	void nhapChiTiet();
	void themChiTiet(ChiTietMay*);
	void xuatChiTiet();
	bool timChiTiet(string);

	double getWeight();
	double getPrice();
};

