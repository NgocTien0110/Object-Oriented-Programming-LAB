#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Hocsinh
{
private:
	char hoten[55];
	int tuoi;
	float dtb;
public:
	Hocsinh();
	Hocsinh(char hoten1[], int tuoi, float dtb);

	friend ostream& operator << (ostream& os, Hocsinh& r);
	friend istream& operator >> (istream& is, Hocsinh& r);
	bool operator > (const Hocsinh& r);
	bool operator < (const Hocsinh& r);
	friend void sapxep(Hocsinh a[], int n);
	
	char* getHoten();
	int getTuoi();
	float getDTB();
};

Hocsinh::Hocsinh()
{
	hoten[0] = '\0';
	tuoi = 0;
	dtb = 0.0;
}

Hocsinh::Hocsinh(char hoten1[], int tuoi, float dtb)
{
	strcpy_s(hoten, strlen(hoten1) - 1, hoten1);
	this->tuoi = tuoi;
	this->dtb = dtb;
}

bool Hocsinh::operator >(const Hocsinh& r)
{
	return this->dtb > r.dtb ? true : false;
}
bool Hocsinh::operator < (const Hocsinh& r)
{
	return this->dtb < r.dtb ? true : false;
}

void sapxep(Hocsinh a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].dtb > a[j].dtb)
				swap(a[i], a[j]);
}

ostream& operator << (ostream& os, Hocsinh& r)
{
	os << r.hoten << ", " << r.tuoi << " tuoi, dtb: " << r.dtb << endl;
	return os;
}
istream& operator >> (istream& is, Hocsinh& r)
{
	cout << "\nNhap ho ten: ";
	is.ignore();
	is.getline(r.hoten, 54);
	cout << "Nhap tuoi: ";
	is >> r.tuoi;
	cout << "Nhap diem trung binh: ";
	is >> r.dtb;
	return is;
}

char* Hocsinh::getHoten()
{
	return hoten;
}

int Hocsinh::getTuoi()
{
	return tuoi;
}

float Hocsinh::getDTB()
{
	return dtb;
}
