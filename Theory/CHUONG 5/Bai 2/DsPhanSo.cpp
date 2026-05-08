#include "DsPhanSo.h"

DSPhanSo::DSPhanSo(int size) {
	n = size;
	if (n > 0) a = new PhanSo[n];
}

DSPhanSo::~DSPhanSo() {
	delete[] a;
}

void DSPhanSo::Nhap() {
	cout << "Nhap so luong phan so: ";
	cin >> n;

	delete[] a;
	a = new PhanSo[n];

	cout << "Nhap phan so: " << "\n";
	for (int i = 0; i < n; i++)
		a[i].Nhap();
}

void DSPhanSo::Xuat() const{
	for (int i = 0; i < n; i++) {
		a[i].Xuat();
	}
}

PhanSo DSPhanSo::Max() const {
	PhanSo max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

PhanSo DSPhanSo::Tong() const {
	PhanSo sum(0, 1);
	for (int i = 0; i < n; i++) {
		sum = sum + a[i];
	}
	return sum;
}