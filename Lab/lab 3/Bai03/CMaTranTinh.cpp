#include "CMaTranTinh.h"

CMaTranTinh::CMaTranTinh()
{
	m = 0;
	n = 0;
	cout << "Phuong thuc thiet lap mac dinh !!!\n";
}

CMaTranTinh::CMaTranTinh(float b[][1000], int m1, int n1)
{
	m = m1;
	n = n1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = b[i][j];
	}
	cout << "Phuong thuc thiet lap khi biet day du thong tin !!!\n";
}

CMaTranTinh::CMaTranTinh(const CMaTranTinh& x)
{
	m = x.m;
	n = x.n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = x.a[i][j];
	}
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac !!!\n";
}

CMaTranTinh::~CMaTranTinh()
{
	cout << "Phuong thuc pha huy !!!\n";
}

void CMaTranTinh::Nhap()
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void CMaTranTinh::Xuat()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}