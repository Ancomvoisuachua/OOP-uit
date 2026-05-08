#pragma once
#include <iostream>
using namespace std;

class CPhanSo;

class CHonSo
{
	private:
		int Nguyen;
		int Tu;
		int Mau;
public: 
    CHonSo();
    CHonSo(int, int, int);

	friend istream& operator>>(istream& is, CHonSo& h);
	friend ostream& operator<<(ostream& os, const CHonSo& h);

	CPhanSo ChuyenSangPhanSo() const;
    int KiemTraHonSoToiGian();

    CHonSo operator+(const CHonSo& other);
    CHonSo operator-(const CHonSo& other);
    CHonSo operator*(const CHonSo& other);
    CHonSo operator/(const CHonSo& other);

    bool operator==(const CHonSo& other) const;
    bool operator!=(const CHonSo& other) const;
    bool operator>(const CHonSo& other) const;
    bool operator<(const CHonSo& other) const;
    bool operator>=(const CHonSo& other) const;
    bool operator<=(const CHonSo& other) const;

    CHonSo operator++();
    CHonSo operator++(int);

    CHonSo operator--();
    CHonSo operator--(int);
};


