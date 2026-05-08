#include "CDiem.h"

void CDiem::Nhap()
{
	cout << "Nhap x: " << endl;
	cin >> x;
	cout << "Nhap y: " << endl;
	cin >> y;
}

void CDiem::Xuat()
{
	cout << x << " " << y << endl;
}

float CDiem::KhoangCach(CDiem d)
{
	return (float)sqrt((x - d.x) * (x - d.x) + (y - d.y) * (y - d.y));
}