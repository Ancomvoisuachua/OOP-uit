#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class CHocSinh
{
private:
	string HoTen;
	float Toan;
	float Van;
public:
	void Nhap();
	void Xuat();
	float DTB();

	static void NhapDanhSachPS(CHocSinh a[], int& n);
	static void XuatDanhSachPS(CHocSinh a[], int n);
	static CHocSinh TimDTBLonNhat(CHocSinh a[], int n);
	static CHocSinh TimDTBNhoNhat(CHocSinh a[], int n);
};

