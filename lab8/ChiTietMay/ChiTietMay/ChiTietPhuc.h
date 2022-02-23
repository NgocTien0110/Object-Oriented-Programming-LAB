#pragma once
#include "ChiTietMay.h"
#include <vector>

class ChiTietPhuc :public ChiTietMay
{
private:
	vector<ChiTietMay*> ChiTietCon;
	static string s;

public:
	ChiTietPhuc();
	ChiTietPhuc(string name);
	~ChiTietPhuc();

	void nhapChiTiet();
	void themChiTiet(ChiTietMay*);
	void xuatChiTiet();
	bool timChiTiet(string);

	double getWeight();
	double getPrice();
};

