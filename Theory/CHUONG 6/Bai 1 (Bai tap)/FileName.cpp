#include <iostream>
#include <vector>
#include "NhanVien.h"

using namespace std;

int main()
{
	vector<NhanVien*> ds;
	
	int n;
	cout << "Nhap so nhan vien: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int loai;

		cout << "1. Lap trinh vien \n";
		cout << "2. Kiem chung vien \n";
		cout << "Chon loai: ";
		cin >> loai;

		NhanVien* nv = nullptr;

		if (loai == 1) nv = new LapTrinhVien();
		else if (loai == 2) nv = new KiemChungVien();
		else {
			cout << "Invalid";
			i--;
			continue;
		}

		nv->Nhap();
		ds.push_back(nv);
	}

	cout << "DANH SACH NHAN VIEN \n";
	double Tongluong = 0;

	for (int i = 0; i < ds.size(); i++)
	{
		ds[i]->Xuat();
		Tongluong += ds[i]->TinhLuong();
	}

	double LuongTB = Tongluong / ds.size();

	for (int i = 0; i < ds.size(); i++)
	{
		if (LuongTB > ds[i]->TinhLuong())
			ds[i]->Xuat();
	}

	for (int i = 0; i < ds.size(); i++)
		delete ds[i];

	return 0;
}