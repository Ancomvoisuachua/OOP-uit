#include<iostream>
using namespace std;
#include"CDaThucDong.h"

int main()
{
	CDaThucDong F1;
	F1.Nhap();
	float a[5] = { 5,4,3,2,1 };
	int n = 4;
	CDaThucDong F2(a, n);
	CDaThucDong F3(F2);
	cout << "Da thuc thu 1: ";
	F1.Xuat();
	cout << "Da thuc thu 2: ";
	F2.Xuat();
	cout << "Da thuc thu 3: ";
	F3.Xuat();
	return 1;
}