#include "CMangDong.h"

CMangDong::CMangDong()
{
	n = 0;
	a = NULL;
	cout << "Phuong thuc thiet lap mac dinh !!!\n";
}

CMangDong::CMangDong(float b[], int m)
{
	n = m;
	a = new float[n];
	for (int i = 0; i < n; i++)
		a[i] = b[i];
	cout << "Phuong thuc thiet lap khi biet day du thong tin !!!\n";
}

CMangDong::CMangDong(const CMangDong& x)
{
	n = x.n;
	for (int i = 0; i < n; i++)
		a[i] = x.a[i];
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac !!!\n";
}

CMangDong::~CMangDong()
{
	delete[] a;
	cout << "Phuong thuc pha huy !!!\n";
}