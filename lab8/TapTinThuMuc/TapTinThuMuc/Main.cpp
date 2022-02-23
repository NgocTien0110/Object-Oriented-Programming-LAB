#include "Component.h"
#include "File.h"
#include "Folder.h"
#include <string>


int main()
{
	// tao cac thanh phan
	Folder* C = new Folder("C:");
		Folder* BaiTap = new Folder("BaiTap");
			File* BT1doc = new File("BT1.doc");	BT1doc->inputSize(123.456);
			Folder* BaiTapC = new Folder("BaiTapC");
				File* BT2cpp = new File("BT2.cpp"); BT2cpp->inputSize(1.280);
			File* BT2xls = new File("BT2.xls"); BT2xls->inputSize(23.456);
		Folder* LyThuyet = new Folder("LyThuyet");
			File* Ch1ppt = new File("Ch1.ppt"); Ch1ppt->inputSize(34567);
	
	// xay dung cay
	C->add(BaiTap);
		BaiTap->add(BT1doc);
		BaiTap->add(BaiTapC);
			BaiTapC->add(BT2cpp);
		BaiTap->add(BT2xls);
	C->add(LyThuyet);
		LyThuyet->add(Ch1ppt);

	// xuat cay thu muc [c:]
	C->print();

	// tra cuu thong tin chi tiet
	string key;	
	cout << "Nhap ten can tim kiem: ";
	getline(cin, key);
	
	if (C->search(key) == 0)
		cout << "Ten khong ton tai !!!" << endl;
	
	system("pause");
	return 0;
}