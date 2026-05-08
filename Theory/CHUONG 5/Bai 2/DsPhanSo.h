#pragma once
#include <iostream>
#include "PhanSO.h"
class DSPhanSo {
private:
	PhanSo* a;
	int n;

public:
	DSPhanSo(int size = 0);
	~DSPhanSo();

	void Nhap();
	void Xuat() const;

	PhanSo Max() const;
	PhanSo Tong() const;
};

