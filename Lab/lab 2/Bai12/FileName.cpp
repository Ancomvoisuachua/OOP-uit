#include "CHocSinh.h"

int main()
{
	CHocSinh a[100];
	int n;

	CHocSinh::NhapDanhSachPS(a, n);
	cout << endl;

	cout << "Danh sach hoc sinh vua nhap: \n";
	CHocSinh::XuatDanhSachPS(a, n);
	cout << endl;

	CHocSinh HScoDTBCaoNhat = CHocSinh::TimDTBLonNhat(a, n);
	cout << "Hoc sinh co DTB cao nhat: \n";
	HScoDTBCaoNhat.Xuat();
	cout << endl;

	CHocSinh HScoDTBThapNhat = CHocSinh::TimDTBNhoNhat(a, n);
	cout << "Hoc sinh co DTB thap nhat: \n";
	HScoDTBThapNhat.Xuat();
	cout << endl;
}