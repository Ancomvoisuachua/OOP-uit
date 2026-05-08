#include<iostream>
using namespace std;
#include "CMaTranDong.h"

int main()
{
	CMaTranDong m1;
	float** a;
	a = new float* [2];
	a[0] = new float[2] {1, 2};
	a[1] = new float[2] {3, 4};
	CMaTranDong m2(a, 2, 2);
	CMaTranDong m3(m2);
	cout << "Ma tran dong m1: \n";
	m1.Xuat();
	cout << "Ma tran dong m2: \n";
	m2.Xuat();
	cout << "Ma tran dong m3: \n";
	m3.Xuat();
	return 1;
}