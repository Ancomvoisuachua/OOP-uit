#include "PhanSO.h"

PhanSo::PhanSo(int t, int m) {
	Tu = t;
	Mau = (m == 0 ? 1 : m);;
}

PhanSo::PhanSo(const PhanSo& p) {
	Tu = p.Tu;
	Mau = p.Mau;
}

int PhanSo::GetTu() const {
	return Tu;
}

int PhanSo::GetMau() const {
	return Mau;
}

void PhanSo::SetTu(int t) {
	Tu = t;
}

void PhanSo::SetMau(int m) {
	Mau = m;
}

void PhanSo::Nhap() {
	cout << "Nhap tu so: ";
	cin >> Tu;

	do {
		cout << "Nhap mau so (!=0): ";
		cin >> Mau;
	} while (Mau == 0);
}

void PhanSo::Xuat() {
	cout << Tu << "/" << Mau << "\n";
}

bool PhanSo::operator > (const PhanSo& other) const {
	return Tu * other.Mau > other.Tu * Mau;
}

PhanSo PhanSo::operator + (const PhanSo& other) const {
	return PhanSo(
		Tu * other.Mau + other.Tu * Mau,
		Mau * other.Mau
	);
}

PhanSo PhanSo::operator - (const PhanSo& other) const {
	return PhanSo(
		Tu * other.Mau - other.Tu * Mau,
		Mau * other.Mau
	);
}
