#pragma once
#include <iostream>

class CHonSo;

class CPhanSo
{
private:
	int Tu;
	int Mau;
public:
	CPhanSo();
	CPhanSo(int, int);

	CHonSo ChuyenSangHonSo();
	void RutGon();

	CPhanSo operator+(const CPhanSo& other);
	CPhanSo operator-(const CPhanSo& other);
	CPhanSo operator*(const CPhanSo& other);
	CPhanSo operator/(const CPhanSo& other);

	bool operator==(const CPhanSo& other) const;
	bool operator!=(const CPhanSo& other) const;
	bool operator>(const CPhanSo& other) const;
	bool operator<(const CPhanSo& other) const;
	bool operator>=(const CPhanSo& other) const;
	bool operator<=(const CPhanSo& other) const;
};

