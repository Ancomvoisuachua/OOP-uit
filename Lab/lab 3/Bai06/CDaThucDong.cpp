#include "CDaThucDong.h"

CDaThucDong::CDaThucDong()
{
	n = 0;
	a = NULL;
	cout << "Phuong thuc thiet lap mac dinh !!!\n";
}

CDaThucDong::CDaThucDong(float* b, int m)
{
	n = m;
	a = new float[n + 1];
	for (int i = n; i >= 0; i--)
		a[i] = b[i];
	cout << "Phuong thuc thiet lap khi biet day du thong tin !!!\n";
}

CDaThucDong::CDaThucDong(const CDaThucDong& x)
{
	n = x.n;
	a = new float[n + 1];
	for (int i = n; i >= 0; i--)
		a[i] = x.a[i];
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac !!!\n";
}

CDaThucDong::~CDaThucDong()
{
	delete[] a;
	cout << "Phuong thuc pha huy !!!\n";
}

void CDaThucDong::Nhap()
{
	cout << "Nhap bac: ";
	cin >> n;

	delete[] a;
	a = new float[n + 1];
	for (int i = n; i >= 0; i--)
	{
		cout << "Nhap he so thu " << i << ":";
		cin >> a[i];
	}
}

void CDaThucDong::Xuat()
{
	for (int i = n; i > 0; i--)
		cout << a[i] << "x^" << i << "+";
	cout << a[0] << endl;
}