#pragma once
#include <iostream>
using namespace std;

class PhanSo {
	private:
		int Tu;
		int Mau;
	public:
		PhanSo(int t = 0, int m = 1);
		PhanSo(const PhanSo& p);

		int GetTu() const;
		int GetMau() const;

		void SetTu(int t);
		void SetMau(int m);

		void Nhap();
		void Xuat();

		bool operator > (const PhanSo& other) const;
		PhanSo operator + (const PhanSo& other) const;
		PhanSo operator - (const PhanSo& other) const;
};
