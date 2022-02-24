#include "Diem.h"

void Diem::nhap()
{
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
}

double Diem::khoangCach(Diem a)
{
	return sqrt((a.x - x) * (a.x - x) + (a.y - y) * (a.y - y));
}

int Diem::trenTrucHoanh()
{
	if (y >= 0)
		return y;
	return -y;
}
