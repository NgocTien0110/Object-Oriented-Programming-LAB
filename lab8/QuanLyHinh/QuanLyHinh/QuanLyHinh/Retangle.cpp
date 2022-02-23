#include "Retangle.h"

HinhChuNhat::HinhChuNhat()
{
	this->input();
}
HinhChuNhat::HinhChuNhat(const double& length, const double& width)
{
	this->length = length;
	this->width = width;
}
HinhChuNhat::~HinhChuNhat() {}

double HinhChuNhat::getArea()
{
	return length * width;
}

double HinhChuNhat::getCirc()
{
	return 2 * (length + width);
}

void HinhChuNhat::input()
{
	cout << "nhap chieu dai > 0: ";
	cin >> length;
	cout << "nhap chieu rong > 0: ";
	cin >> width;

	while (length < 0 || width < 0)
	{
		cout << "nhap chieu dai > 0: ";
		cin >> length;
		cout << "nhap chieu rong > 0: ";
		cin >> width;
	}
}

void HinhChuNhat::print()
{
	cout << "Hinh Chu Nhat (d = " << length 
		<< ", r = " << width << ") co P = "
		<< this->getCirc() << " co S = "
		<< this->getArea() << endl;
}
