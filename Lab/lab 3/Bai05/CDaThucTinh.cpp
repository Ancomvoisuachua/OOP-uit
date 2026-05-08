#include "CDaThucTinh.h"

CDaThucTinh::CDaThucTinh()
{
	n = 0;
	cout << "Phuong thuc thiet lap mac dinh !!!\n";
}

CDaThucTinh::CDaThucTinh(float b[], int m)
{
	n = m;
	for (int i = n; i >= 0; i--)
		a[i] = b[i];
	cout << "Phuong thuc thiet lap khi biet day du thong tin !!!\n";
}

CDaThucTinh::CDaThucTinh(const CDaThucTinh& x)
{
	n = x.n;
	for (int i = n; i >= 0; i--)
		a[i] = x.a[i];
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac !!!\n";
}

CDaThucTinh::~CDaThucTinh() 
{
	cout << "Phuong thuc pha huy !!!\n";
}

void CDaThucTinh::Nhap()
{
	cout << "Nhap bac: ";
	cin >> n;

	for (int i = n; i >= 0; i--)
	{
		cout << "Nhap he so thu " << i << ":";
		cin >> a[i];
	}
}

void CDaThucTinh::Xuat()
{
	for (int i = n; i > 0; i--)
		cout << a[i] << "x^" << i << "+";
	cout << a[0] << endl;
}