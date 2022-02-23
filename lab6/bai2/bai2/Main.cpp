#include "SoPhuc1.h"
#include "SoPhuc2.h"

int main()
{
	// phan 1
	cout << "Phan 1: \n\n";
	SoPhuc1 sp0, sp1, sp2(2), sp3(2, 3), sp4(3, -4);
	
	//cout << "nhap so phuc 0: \n";
	//sp0.nhap();
	//cout << endl;

	cout << "so phuc sp0: " << sp0.xuat() << endl
		<< "so phuc sp1: " << sp1.xuat() << endl
		<< "so phuc sp2(2) : " << sp2.xuat() << endl
		<< "so phuc sp3(2, 3) : " << sp3.xuat() << endl
		<< "so phuc sp4(3,-4) : " << sp4.xuat() << endl;

	// phan 2
	cout << "\n-----------------------------------------------";
	cout << "\nPhan 2: \n\n";
	SoPhuc2 s0, s1 , s2(2), s3(2, 3), s4(3, -4);

	/*cout << "nhap so phuc 0: \n";
	cin >> s0;
	cout << endl;*/

	cout << "so phuc s0: " << s0 << endl
		<< "so phuc s1: " << s1 << endl
		<< "so phuc s2(2) : " << s2 << endl
		<< "so phuc s3(2, 3) : " << s3 << endl
		<< "so phuc s4(3, -4) : " << s4 << endl;

	SoPhuc2 i1, i2;
	cout << "\nNhap so phuc 1: \n";
	cin >> i1;
	cout << "\nNhap so phuc 2: \n";
	cin >> i2;

	cout << endl;
	if (i1 == i2)
		cout << i1 << " == " << i2 << endl;
	else if (i1 != i2)
		cout << i1 << " != " << i2 << endl;

	cout << endl;
	if (i1 > i2)
		cout << i1 << " > " << i2 << endl;
	else if (i1 < i2)
		cout << i1 << " < " << i2 << endl;

	cout << endl;
	cout << "(" << i1 << ") + (" << i2 << ") = " << i1 + i2 << endl;
	cout << "(" << i1 << ") - (" << i2 << ") = " << i1 - i2 << endl;
	cout << "(" << i1 << ") * (" << i2 << ") = " << i1 * i2 << endl;
	cout << "(" << i1 << ") / (" << i2 << ") = " << i1 / i2 << endl;;

	return 0;
}