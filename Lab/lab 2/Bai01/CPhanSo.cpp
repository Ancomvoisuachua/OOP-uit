#include "CPhanSo.h"

void CPhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> Tu;
	cout << "Nhap mau so: ";
	cin >> Mau;
}

void CPhanSo::Xuat()
{
	if (Tu < 0 && Mau < 0) cout << -1 * Tu << "/" << -1 * Mau;
	else if (Mau < 0) cout << -1 * Tu << "/" << -1 * Mau;
	else cout << Tu << "/" << Mau;
}

void CPhanSo::KiemTraAmDuong()
{
	if (Tu * Mau < 0) cout << "Phan so am";
	else if (Tu * Mau > 0) cout << "Phan so duong";
	else cout << "Bang khong";
}