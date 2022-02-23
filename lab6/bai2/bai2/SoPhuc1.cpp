#include "SoPhuc1.h"
#include <string>

SoPhuc1::SoPhuc1()
{
	this->thuc = this->ao = 0;
}
SoPhuc1::SoPhuc1(const double& thuc)
{
	this->thuc = thuc;
	this->ao = 0;
}
SoPhuc1::SoPhuc1(const double& thuc, const double& ao)
{
	this->thuc = thuc;
	this->ao = ao;
}
SoPhuc1::~SoPhuc1(){}

void SoPhuc1::nhap()
{
	cout << "nhap phan thuc: ";
	cin >> this->thuc;
	cout << "nhap phan ao: ";
	cin >> this->ao;
}

string SoPhuc1::xuat()
{
	string s = "";
	s = (this->thuc == (int)this->thuc) ? to_string((int)this->thuc) : to_string(this->thuc);
	if (this->ao == 0)
		return s;
	else if (this->ao > 0)
	{
		s += "+";
		s += (this->ao == (int)this->ao) ? to_string((int)this->ao) : to_string(this->ao);
		s += "i";
		return s;
	}
	else
	{
		s += (this->ao == (int)this->ao) ? to_string((int)this->ao) : to_string(this->ao);
		s += "i"; 
		return s;
	}	
}