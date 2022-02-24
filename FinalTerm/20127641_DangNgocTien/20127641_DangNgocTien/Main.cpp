#include "SoNguyen.h"

bool binarySearch(SoNguyen arr[], int l, int r, SoNguyen x);
int main()
{
	int n;
	SoNguyen min;

	cout << "Nhap so luong mang: ";
	cin >> n;

	SoNguyen* a = new SoNguyen[n];
	for (int i = 0; i < n; i++)
	{
		cout << "nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];			
	}

	min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	cout << "\nSo nguyen nho nhat trong mang: " << min << endl;

	// sap xep
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}

	SoNguyen sn;
	cout << "Nhap so nguyen can tim: ";
	cin >> sn;

	if (binarySearch(a, 0, n, sn))
		cout << "Tim thay. " << endl;
	else
		cout << "Khong tim thay. " << endl;

	delete[]a;
	return 0;
}

bool binarySearch(SoNguyen arr[], int l, int r, SoNguyen x) 
{
	if (r >= l) {
		int mid = l + (r - l) / 2; 

		if (arr[mid] == x)
			return true;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}

	return false;
}