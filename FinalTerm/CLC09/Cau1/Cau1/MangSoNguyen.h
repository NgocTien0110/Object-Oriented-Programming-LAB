#pragma once
#include "SoNguyen.h"
#include <vector>
#include <algorithm>

class MangSoNguyen
{
private:
	vector<SoNguyen> a;
public:
	static int min;
	MangSoNguyen();
	~MangSoNguyen();

	void nhapMang();
	void xuatMang();

	void sapXep();
	bool binarySearch(SoNguyen sn);
};

