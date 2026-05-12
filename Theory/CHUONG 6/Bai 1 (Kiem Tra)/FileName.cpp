#include "SinhVien.h"

int main() {
	SVCaoDang svcd;
	SVDaiHoc svdh;

	cout << "Nhap sinh vien cao dang \n";
	svcd.Nhap();

	cin.ignore();
	cout << "Nhap sinh vien dai hoc \n";
	svdh.Nhap();

	svcd.Xuat();
	svdh.Xuat();
	
	return 0;
}