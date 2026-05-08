#include <iostream>
using namespace std;
struct Phanso
{
	int Tuso, Mauso;
};
typedef struct Phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
int KiemTra(PHANSO);
int RutGon(int, int);
PHANSO Tong(PHANSO, PHANSO);
PHANSO Hieu(PHANSO, PHANSO);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO, PHANSO);

int main()
{
	PHANSO x, y;

	Nhap(x);
	Nhap(y);

	cout << "Hai phan so vua nhap la: " << endl;
	Xuat(x);
	Xuat(y);

	PHANSO tong = Tong(x, y);
	PHANSO hieu = Hieu(x, y);
	PHANSO tich = Tich(x, y);
	PHANSO thuong = Thuong(x, y);

	cout << "Tong 2 phan so la: " << endl;
	Xuat(tong);

	cout << "Hieu 2 phan so la: " << endl;
	Xuat(hieu);

	cout << "Tich 2 phan so la: " << endl;
	Xuat(tich);

	cout << "Thuong 2 phan so la: " << endl;
	Xuat(thuong);

	return 1;
}

void Nhap(PHANSO& p)
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

void Xuat(PHANSO p)
{
	if (p.Mauso == 1) cout << p.Tuso << endl;
	else if (p.Tuso == 0) cout << 0 << endl;
	else cout << p.Tuso << "/" << p.Mauso << endl;
}

int RutGon(int a, int b)
{
	if (b == 0) return a;
	return RutGon(b, a % b);
}

PHANSO Tong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tuso = (x.Tuso * y.Mauso) + (y.Tuso * x.Mauso);
	temp.Mauso = (x.Mauso * y.Mauso);

	int ucln = RutGon(temp.Tuso, temp.Mauso);
	temp.Tuso /= ucln;
	temp.Mauso /= ucln;

	if ((temp.Tuso < 0 && temp.Mauso < 0) || temp.Mauso < 0) 
	{
		temp.Tuso *= -1;
		temp.Mauso *= -1;
	}

	return temp;
}

PHANSO Hieu(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tuso = (x.Tuso * y.Mauso) - (y.Tuso * x.Mauso);
	temp.Mauso = (x.Mauso * y.Mauso);

	int ucln = RutGon(temp.Tuso, temp.Mauso);
	temp.Tuso /= ucln;
	temp.Mauso /= ucln;

	if ((temp.Tuso < 0 && temp.Mauso < 0) || temp.Mauso < 0) 
	{
		temp.Tuso *= -1;
		temp.Mauso *= -1;
	}

	return temp;
}

PHANSO Tich(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tuso = (x.Tuso * y.Tuso);
	temp.Mauso = (x.Mauso * y.Mauso);

	int ucln = RutGon(temp.Tuso, temp.Mauso);
	temp.Tuso /= ucln;
	temp.Mauso /= ucln;

	if ((temp.Tuso < 0 && temp.Mauso < 0) || temp.Mauso < 0) 
	{
		temp.Tuso *= -1;
		temp.Mauso *= -1;
	}

	return temp;
}

PHANSO Thuong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tuso = (x.Tuso * y.Mauso);
	temp.Mauso = (x.Mauso * y.Tuso);

	int ucln = RutGon(temp.Tuso, temp.Mauso);
	temp.Tuso /= ucln;
	temp.Mauso /= ucln;

	if ((temp.Tuso < 0 && temp.Mauso < 0) || temp.Mauso < 0)
	{
		temp.Tuso *= -1;
		temp.Mauso *= -1;
	}

	return temp;
}