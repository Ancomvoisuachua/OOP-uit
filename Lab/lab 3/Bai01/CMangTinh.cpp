#include "CMangTinh.h"

CMangTinh::CMangTinh()
{
	n = 0;
	cout << "Phuong thuc thiet lap mac dinh !!!\n";
}

CMangTinh::CMangTinh(float b[], int m)
{
	n = m;
	for (int i = 0; i < n; i++)
		a[i] = b[i];
	cout << "Phuong thuc thiet lap khi biet day du thong tin !!!\n";
}

CMangTinh::CMangTinh(const CMangTinh& x)
{
	n = x.n;
	for (int i = 0; i < n; i++)
		a[i] = x.a[i];
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac !!!\n";
}

CMangTinh::~CMangTinh()
{
	cout << "Phuong thuc pha huy !!!\n";
}