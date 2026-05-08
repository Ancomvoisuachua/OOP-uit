#include <iostream>
using namespace std;
struct Phanso
{
	float Tuso, Mauso;
};
typedef struct Phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
int KiemTra(PHANSO);

int main()
{
	PHANSO p;
	Nhap(p);

	int kq = KiemTra(p);
	Xuat(p);

	switch (kq)
	{
	case 1: cout << "\nPhan so > 0 ";
		break;
	case -1: cout << "\nPhan so < 0";
		break;
	case 0: cout << "\nPhan so = 0";
		break;
	}

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
	if (p.Mauso == 1) cout << p.Tuso;
	else if (p.Tuso == 0) cout << 0;
	else cout << p.Tuso << "/" << p.Mauso;
}

int KiemTra(PHANSO p)
{
	if (p.Tuso * p.Mauso < 0) return -1;
	else if (p.Tuso * p.Mauso > 0) return 1;
	return 0;
}