#include "CDiem.h"
#include "CDuongTron.h"

int main()
{
	CDuongTron c;

	c.Nhap();
	c.Xuat();

	float p = c.ChuVi();
	float s = c.DienTich();

	cout << "Chu vi = " << p << endl;
	cout << "Dien tich = " << s << endl;
	return 1;
}
