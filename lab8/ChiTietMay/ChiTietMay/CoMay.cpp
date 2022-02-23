#include "CoMay.h"

CoMay::CoMay()
{
	dsChiTiet.resize(0);
}
CoMay::~CoMay()
{
	if (!dsChiTiet.empty())
	{
		for (vector<ChiTietMay*>::iterator i = dsChiTiet.begin(); i != dsChiTiet.end(); i++)
			delete(*i);
	}
}

ChiTietMay* CoMay::themCT() 
{
	int choice,n;
	ChiTietMay* p = new ChiTietPhuc;
	p->nhapChiTiet();

	cout << "Nhap so luong chi tiet con cho chi tiet " << p->getID() << ": ";
	cin >> n;
	//cin.ignore();

	for (int i = 0; i < n; i++)
	{
		cout << "chi tiet thu " << i + 1 << " cho chi tiet " << p->getID() << ": " << endl;

		do
		{
			cout << "1. Chi Tiet Don." << endl;
			cout << "2. Chi Tiet Phuc." << endl;
			cin >> choice;
			cin.ignore();
		} while (choice < 1 || choice>2);

		if (choice == 1)
		{
			ChiTietMay* m = new ChiTietDon;
			m->nhapChiTiet();
			p->themChiTiet(m);
		}
		else
		{
			p->themChiTiet(themCT());
		}
	}
	return p;
}

void CoMay::nhapChiTiet()
{
	int n;
	cout << "Nhap so luong chi tiet cho Co May: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int choice;
		cout << "\nNhap chi tiet thu " << i + 1 << " cua Co May: " << endl;
		do
		{
			cout << "1. Chi Tiet Don." << endl;
			cout << "2. Chi Tiet Phuc." << endl;
			cin >> choice;
			cin.ignore();
		} while (choice<1 || choice>2);

		ChiTietMay* m;
		if (choice == 1)
		{
			m = new ChiTietDon;
			m->nhapChiTiet();
			dsChiTiet.push_back(m);
		}
		else
		{
			dsChiTiet.push_back(themCT());
		}
	}
}

void CoMay::xuatChiTiet()
{
	if (!dsChiTiet.empty())
	{
		cout << "Chi Tiet cua Co May: " << endl;
		cout << "Tong khoi luong: " << this->tongTrongLuong() << endl;
		cout << "Tong gia thanh: " << this->tongGiaThanh() << endl;
		int d = 1;
		for (ChiTietMay* i : dsChiTiet)
		{
			cout << "--------------------------------------------------------" << endl;
			cout << "Chi tiet thu " << d << ": " << endl;
			i->xuatChiTiet();
			cout << "--------------------------------------------------------" << endl;
			d++;
		}
	}
}

void CoMay::timChiTiet()
{
	string id;
	cout << "Nhap ID may: ";
	getline(cin, id);

	bool check = false;
	for (ChiTietMay* i : dsChiTiet)
	{
		if (i->timChiTiet(id) == true)
		{
			check = true;
			break;
		}
	}
	if (check == false)
		cout << "Khong tim thay chi tiet " << id << endl;
}

double CoMay::tongTrongLuong()
{
	double total = 0;
	if (!dsChiTiet.empty())
	{
		for (ChiTietMay* i : dsChiTiet)
			total += i->getWeight();
	}
	return total;
}

double CoMay::tongGiaThanh()
{
	double total = 0;
	if (!dsChiTiet.empty())
	{
		for (ChiTietMay* i : dsChiTiet)
			total += i->getPrice();
	}
	return total;
}