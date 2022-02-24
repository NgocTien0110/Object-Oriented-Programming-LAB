#include <iostream>

using namespace std;

class SinhVien
{
private:
	char* mssv;
	char* hoten;
	static int sl;
public:
	SinhVien();
	SinhVien(const char* mssv, const char* hoten);
	SinhVien(const SinhVien& sv);
	~SinhVien();

	const SinhVien& operator = (const SinhVien& sv);
	friend ostream& operator <<(ostream&, const SinhVien& vs);

	static int SoLuongSV();
};
