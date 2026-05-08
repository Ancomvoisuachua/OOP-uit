#include<iostream>
using namespace std;
#include "CMaTranTinh.h"

int main()
{
	CMaTranTinh m1;
	CMaTranTinh m2;
	m2.Nhap();
	CMaTranTinh m3(m2);
	cout << "Ma tran dong m1: \n";
	m1.Xuat();
	cout << "Ma tran dong m2: \n";
	m2.Xuat();
	cout << "Ma tran dong m3: \n";
	m3.Xuat();
	return 1;
}