#include "CDuongTron.h"
using namespace std;

void CDuongTron::Nhap()
{
	cout << "Nhap tam O : " << endl;
	O.Nhap();
	cout << "Nhap ban kinh R : " << endl;
	cin >> R;
}

void CDuongTron::Xuat()
{
	cout << "tam O la: " << endl;
	O.Xuat();
	cout << "ban kinh R la: ";
	cout << R << endl;
}

float CDuongTron::ChuVi()
{
	return 2 * 3.14 * R;
}

float CDuongTron::DienTich()
{
	return 3.14 * R * R;
}