#include "CTamGiac.h"
#include <iostream>
using namespace std;

void CTamGiac::Nhap()
{
	cout << "Nhap diem A : " << endl;
	A.Nhap();
	cout << "Nhap diem B : " << endl;
	B.Nhap();
	cout << "Nhap diem C : " << endl;
	C.Nhap();
}

void CTamGiac::Xuat()
{
	cout << "Diem A: " << endl;
	A.Xuat();
	cout << "Diem B: " << endl;
	B.Xuat();
	cout << "Diem C: " << endl;
	C.Xuat();
}

float CTamGiac::ChuVi()
{
	float a = B.KhoangCach(C);
	float b = A.KhoangCach(C);
	float c = A.KhoangCach(B);

	return (a + b + c);
}

float CTamGiac::DienTich()
{
	float a = B.KhoangCach(C);
	float b = A.KhoangCach(C);
	float c = A.KhoangCach(B);
	float p = (a + b + c) / 2;

	return (float)sqrt(p * (p - a) * (p - b) * (p - c));
}

CDiem CTamGiac::TrongTam()
{
	CDiem G;
	float xG = (A.GetX() + B.GetX() + C.GetX()) / 3;
	float yG = (A.GetY() + B.GetY() + C.GetY()) / 3;
	G.SetXY(xG, yG);
	return G;
}