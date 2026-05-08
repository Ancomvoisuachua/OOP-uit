#include "CMaTranDong.h"

CMaTranDong::CMaTranDong()
{
	m = 0;
	n = 0;
	a = NULL;
	cout << "Phuong thuc thiet lap mac dinh !!!\n";
}

CMaTranDong::CMaTranDong(float** b, int m1, int n1)
{
	m = m1;
	n = n1;
	a = new float* [m];
	for (int i = 0; i < m; i++)
	{
		a[i] = new float[n];
		for (int j = 0; j < n; j++)
			a[i][j] = b[i][j];
	}
	cout << "Phuong thuc thiet lap khi biet day du thong tin !!!\n";
}

CMaTranDong::CMaTranDong(const CMaTranDong& x)
{
	m = x.m;
	n = x.n;
	a = new float* [m];
	for (int i = 0; i < m; i++)
	{
		a[i] = new float[n];
		for (int j = 0; j < n; j++)
			a[i][j] = x.a[i][j];
	}
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac !!!\n";
}

CMaTranDong::~CMaTranDong()
{
	for (int i = 0; i < m; i++)
		delete[] a[i];
	delete[] a;
	cout << "Phuong thuc pha huy !!!\n";
}

void CMaTranDong::Nhap()
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	a = new float* [m];
	for (int i = 0; i < m; i++)
	{
		a[i] = new float[n];
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void CMaTranDong::Xuat()
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