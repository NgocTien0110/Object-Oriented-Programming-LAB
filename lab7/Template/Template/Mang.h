#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "SinhVien.h"
using namespace std;

template <typename T>
class Mang
{
private:
	T* data;
	int n;
public:
	Mang();
	Mang(T* data, int n);
	~Mang();
	void sort();
	int timkiem(const T& key) const;
	void ghifile(const char* tenfile);
	void docfile(char* tenfile);
	int timmax()const;
	int timmin()const;
	void xuat()const;
	void nhap();
	bool ktRong()const;
};


template <typename T>
Mang<T>::Mang()
{
	n = 0;
	data = nullptr;
}

template <typename T>
Mang<T>::Mang(T* data, int n)
{
	this->n = n;
	this->data = new T[n];
	for (int i = 0; i < n; i++)
	{
		this->data[i] = data[i];
	}
}

template <typename T>
Mang<T>::~Mang()
{
	if (data != nullptr)
		delete[]data;
	n = 0;
}

template <typename T>
bool Mang<T>::ktRong() const
{
	return (n <= 0) ? true : false;
}

template <typename T>
void Mang<T>::nhap()
{
	cout << "Nhap so luong: ";
	cin >> n;

	data = new T[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> data[i];
	}
}
void Mang<string>::nhap()
{
	cout << "Nhap so luong: ";
	cin >> n;

	data = new string[n];
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << ": ";
		getline(cin, data[i]);
	}
}

template <typename T>
void Mang<T>::xuat() const
{
	for (int i = 0; i < n; i++)
		cout << data[i] << endl;
}
void Mang<string>::xuat() const
{
	for (int i = 0; i < n; i++)
		cout << data[i] << endl;
}

template <typename T>
void Mang<T>::sort()
{
	T temp {};
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (data[i] > data[j])
				swap(data[i], data[j]);
}

template <typename T>
int Mang<T>::timkiem(const T& key) const
{
	for (int i = 0; i < n; i++)
		if (data[i] == key)
			return i;
	return -1;
}

template <typename T>
int Mang<T>::timmax() const
{
	int index = 0;
	for (int i = 1; i < n; i++)
		if (data[i] > data[index])
			index = i;
	return index;
}

template <typename T>
int Mang<T>::timmin() const
{
	int index = 0;
	for (int i = 1; i < n; i++)
		if (data[i] < data[index])
			index = i;
	return index;
}

template <typename T>
void Mang<T>::ghifile(const char* tenfile)
{
	ofstream ofs(tenfile, ios::out);
	if (!ofs.is_open())
	{
		cout << "khong the mo file!" << endl;
		return;
	}

	ofs << n << endl;;
	for (int i = 0; i < n; i++)
	{
		ofs << data[i] << endl;
	}
	ofs.close();
}
void Mang<Hocsinh>::ghifile(const char* tenfile)
{
	ofstream ofs(tenfile, ios::out);
	if (!ofs.is_open())
	{
		cout << "khong the mo file!" << endl;
		return;
	}

	ofs << n << endl;;
	for (int i = 0; i < n; i++)
	{
		ofs << data[i].getHoten() << ' ' << data[i].getTuoi() << ' ' << data[i].getDTB() << endl;
	}
	ofs.close();
}

template <typename T>
void Mang<T>::docfile( char* tenfile)
{
	ifstream ifs(tenfile ,ios::in);
	if (!ifs.is_open())
	{
		cout << "khong mo duoc file! " << endl;
		return;
	}

	ifs << n;
	for (int i = 0; i < n; i++)
	{
		ifs << data[i];
	}
	ifs.close();
}