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
PHANSO TimPhanSoLonNhat(PHANSO, PHANSO);

int main()
{
	PHANSO x, y;

	Nhap(x);
	Nhap(y);

	PHANSO kq = TimPhanSoLonNhat(x, y);
	Xuat(x);
	Xuat(y);

	cout << "Phan so lon nhat la: ";
	Xuat(kq);

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

int KiemTra(PHANSO p)
{
	if (p.Tuso * p.Mauso < 0) return -1;
	else if (p.Tuso * p.Mauso > 0) return 1;

	return 0;
}

PHANSO TimPhanSoLonNhat(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tuso = (x.Tuso * y.Mauso) - (y.Tuso * x.Mauso);
	temp.Mauso = (x.Mauso * y.Mauso);

	if (KiemTra(temp) == 1) return x;
	return y;
}