#include "CHocSinh.h"

void CHocSinh::Nhap()
{
	cout << "Nhap Ho va Ten: \n";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap diem Toan: \n";
	cin >> Toan;
	cout << "Nhap diem Van: \n";
	cin >> Van;
}

void CHocSinh::NhapDanhSachPS(CHocSinh a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i].Nhap();
		cout << endl;
	}
}

void CHocSinh::Xuat()
{
	cout << "Ho va Ten la: " << HoTen << "\n";
	cout << "Diem Toan la: " << Toan << "\n";
	cout << "Diem Van la: " << Van << "\n";
	cout << "Diem TB la: " << DTB() << "\n";
}

void CHocSinh::XuatDanhSachPS(CHocSinh a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i].Xuat();
		cout << " ";
	}
	cout << endl;
}

CHocSinh CHocSinh::TimDTBLonNhat(CHocSinh a[], int n)
{
	CHocSinh Max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i].DTB() > Max.DTB())
		{
			Max = a[i];
		}
	}
	return Max;
}


CHocSinh CHocSinh::TimDTBNhoNhat(CHocSinh a[], int n)
{
	CHocSinh Min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i].DTB() < Min.DTB())
		{
			Min = a[i];
		}
	}
	return Min;
}

float CHocSinh::DTB()
{
	return (Toan + Van) / 2.0;
}