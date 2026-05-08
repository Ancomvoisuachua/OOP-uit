#include<iostream>
using namespace std;
#include"CDaThucTinh.h"

int main()
{
	CDaThucTinh F1;
	F1.Nhap();
	CDaThucTinh F2;
	F2.Nhap();
	CDaThucTinh F3(F2);
	cout << "Da thuc thu 1: ";
	F1.Xuat();
	cout << "Da thuc thu 2: ";
	F2.Xuat();
	cout << "Da thuc thu 3: ";
	F3.Xuat();
	return 1;
}