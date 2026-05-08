#include <iostream>
using namespace std;
struct Phanso
{
	int Tuso, Mauso;
};
typedef struct Phanso PHANSO;
void NhapDanhSach(PHANSO a[], int& n);
void XuatDanhSach(PHANSO a[], int n);
void XuatPS(PHANSO p);
PHANSO TimMax(PHANSO a[], int n);
void SortTang(PHANSO a[], int n);
void SortGiam(PHANSO a[], int n);

int main()
{
	PHANSO a[100];
	int n;

	NhapDanhSach(a, n);

	cout << "Danh sach vua nhap: " << endl;
	XuatDanhSach(a, n);

	PHANSO maxPS = TimMax(a, n);
	cout << "Phan so lon nhat: " << endl;
	XuatPS(maxPS);
	cout << endl;

	SortTang(a, n);
	cout << "Tang dan: " << endl;
	XuatDanhSach(a, n);

	SortGiam(a, n);
	cout << "Giam dan: " << endl;
	XuatDanhSach(a, n);
	return 1;
}


void NhapPS(PHANSO& p)
{
	cout << "Nhap tu so: " << endl;
	cin >> p.Tuso;

	do 
	{
		cout << "Nhap mau so: " << endl;
		cin >> p.Mauso;
	} 
	while (p.Mauso == 0);
}

void NhapDanhSach(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;

	for (int i = 0; i < n; i++) 
	{
		cout << "Phan so thu " << i + 1 << ": " << endl;
		NhapPS(a[i]);
	}
}

void XuatPS(PHANSO p)
{
	if (p.Mauso == 1) cout << p.Tuso;
	else if (p.Tuso == 0) cout << 0;
	else cout << p.Tuso << "/" << p.Mauso;
}

void XuatDanhSach(PHANSO a[], int n) {
	for (int i = 0; i < n; i++) 
	{
		XuatPS(a[i]);
		cout << " ";
	}
	cout << endl;
}

bool LonHon(PHANSO x, PHANSO y)
{
	return x.Tuso * y.Mauso > y.Tuso * x.Mauso;
}

PHANSO TimMax(PHANSO a[], int n)
{
	PHANSO maxPS = a[0];

	for (int i = 1; i < n; i++) 
	{
		if (LonHon(a[i], maxPS))
			maxPS = a[i];
	}
	return maxPS;
}

void SortTang(PHANSO a[], int n)
{
	for (int i = 1; i < n; i++) 
	{
		PHANSO key = a[i];
		int j = i - 1;

		while (j >= 0 && LonHon(a[j], key)) {
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = key;
	}
}

void SortGiam(PHANSO a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		PHANSO key = a[i];
		int j = i - 1;

		while (j >= 0 && !LonHon(a[j], key)) {
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = key;
	}
}