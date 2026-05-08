#include "CHocSinh.h"

void CHocSinh::Nhap()
{
	cout << "Nhap Ho va Ten: \n";
	cin >> HoTen;
	cout << "Nhap diem Toan: \n";
	cin >> Toan;
	cout << "Nhap diem Van: \n";
	cin >> Van;
}

void CHocSinh::Xuat()
{ 
	cout << "Ho va Ten la: " << HoTen << "\n";
	cout << "Diem Toan la: " << Toan << "\n";
	cout << "Diem Van la: " << Van << "\n";
	cout << "Diem TB la: " << DTB() << "\n";
}

float CHocSinh::DTB()
{
	return (Toan + Van) / 2.0;
}