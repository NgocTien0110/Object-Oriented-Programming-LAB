#include "MangSoNguyen.h"

int MangSoNguyen::min = 2147483647;

MangSoNguyen::MangSoNguyen()
{
	a.resize(0);
}
MangSoNguyen::~MangSoNguyen(){}

void MangSoNguyen::nhapMang()
{
	int n;
	cout << "Nhap so luong mang so nguyen: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so nguyen thu " << i + 1 << ": ";
		SoNguyen sn;
		cin >> sn;
		a.push_back(sn);
		
		if (sn < min)
			min = sn.getValue();
	}
}

void MangSoNguyen::xuatMang()
{
	if (!a.empty())
		for (SoNguyen i : a)
			cout << i << " ";
}

void MangSoNguyen::sapXep()
{
	int n = a.size();
	if (n == 0) return;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
}


bool MangSoNguyen::binarySearch(SoNguyen sn)
{
	int r = this->a.size() - 1; 
	int l = 0; 
	while (r >= l) 
	{
		int mid = l + (r - l) / 2; 

		if (a[mid] == sn)
			return true;

		if (a[mid] > sn)
			r = mid - 1;
		if (a[mid] < sn)
			l = mid + 1;
	}

	return false;
}