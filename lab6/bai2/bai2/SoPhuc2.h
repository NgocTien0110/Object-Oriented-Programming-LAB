#pragma once
#include "SoPhuc1.h"

class SoPhuc2 : public SoPhuc1
{
public:
	SoPhuc2();
	SoPhuc2(const double&);
	SoPhuc2(const double&, const double&);

	static double modul(const SoPhuc2&);

	SoPhuc2& operator ++();
	SoPhuc2 operator --();

	friend SoPhuc2 operator +(const SoPhuc2&, const SoPhuc2&);
	friend SoPhuc2 operator -(const SoPhuc2&, const SoPhuc2&);
	friend SoPhuc2 operator *(const SoPhuc2&, const SoPhuc2&);
	friend SoPhuc2 operator /(const SoPhuc2&, const SoPhuc2&);

	friend bool operator >(const SoPhuc2&, const SoPhuc2&);
	friend bool operator <(const SoPhuc2&, const SoPhuc2&);
	friend bool operator >=(const SoPhuc2&, const SoPhuc2&);
	friend bool operator <=(const SoPhuc2&, const SoPhuc2&);

	friend bool operator ==(const SoPhuc2&, const SoPhuc2&);
	friend bool operator !=(const SoPhuc2&, const SoPhuc2&);

	friend ostream& operator <<(ostream&, const SoPhuc2&);
	friend istream& operator >>(istream&, SoPhuc2&);
};