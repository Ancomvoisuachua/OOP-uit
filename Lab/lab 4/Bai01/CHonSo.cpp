#include "CHonSo.h"
#include "CPhanSo.h"

istream& operator>>(istream& is, CHonSo& x)
{
	cout << "Nhap phan nguyen: ";
	is >> x.Nguyen;
	cout << "Nhap tu: ";
	is >> x.Tu;
	cout << "Nhap mau: ";
	is >> x.Mau;
	return is;
}

ostream& operator<<(ostream& os, const CHonSo& x)
{
	os << x.Nguyen << "(" << x.Tu << "/" << x.Mau << ")" << endl;
	return os;
}

CHonSo::CHonSo()
{
	Nguyen = 1;
	Tu = 1;
	Mau = 1;
}

CHonSo::CHonSo(int n, int t, int m)
{
	Nguyen = n;
	Tu = t;
	Mau = m;
}

CPhanSo CHonSo::ChuyenSangPhanSo() const
{
	CPhanSo temp(Nguyen * Mau + Tu, Mau);
	return temp;
}

CHonSo CHonSo::operator+(const CHonSo& F)
{
	CPhanSo x1 = ChuyenSangPhanSo();
	CPhanSo x2 = F.ChuyenSangPhanSo();
	CPhanSo temp = x1 + x2;
	return temp.ChuyenSangHonSo();
}

CHonSo CHonSo::operator-(const CHonSo& F)
{
	CPhanSo x1 = ChuyenSangPhanSo();
	CPhanSo x2 = F.ChuyenSangPhanSo();
	CPhanSo temp = x1 - x2;
	return temp.ChuyenSangHonSo();
}

CHonSo CHonSo::operator*(const CHonSo& F)
{
	CPhanSo x1 = ChuyenSangPhanSo();
	CPhanSo x2 = F.ChuyenSangPhanSo();
	CPhanSo temp = x1 * x2;
	return temp.ChuyenSangHonSo();
}

CHonSo CHonSo::operator/(const CHonSo& F)
{
	CPhanSo x1 = ChuyenSangPhanSo();
	CPhanSo x2 = F.ChuyenSangPhanSo();
	CPhanSo temp = x1 / x2;
	return temp.ChuyenSangHonSo();
}

bool CHonSo::operator==(const CHonSo& F) const
{
	CPhanSo x1 = ChuyenSangPhanSo();
	CPhanSo x2 = F.ChuyenSangPhanSo();
	return x1 == x2;
}

bool CHonSo::operator!=(const CHonSo& F) const
{
	CPhanSo x1 = ChuyenSangPhanSo();
	CPhanSo x2 = F.ChuyenSangPhanSo();
	return x1 != x2;
}

bool CHonSo::operator>(const CHonSo& F) const
{
	CPhanSo x1 = ChuyenSangPhanSo();
	CPhanSo x2 = F.ChuyenSangPhanSo();
	return x1 > x2;
}

bool CHonSo::operator<(const CHonSo& F) const
{
	CPhanSo x1 = ChuyenSangPhanSo();
	CPhanSo x2 = F.ChuyenSangPhanSo();
	return x1 < x2;
}

bool CHonSo::operator>=(const CHonSo& F) const
{
	CPhanSo x1 = ChuyenSangPhanSo();
	CPhanSo x2 = F.ChuyenSangPhanSo();
	return x1 >= x2;
}

bool CHonSo::operator<=(const CHonSo& F) const
{
	CPhanSo x1 = ChuyenSangPhanSo();
	CPhanSo x2 = F.ChuyenSangPhanSo();
	return x1 <= x2;
}

CHonSo CHonSo::operator++()
{
	Nguyen++;
	return *this;
}

CHonSo CHonSo::operator++(int)
{
	CHonSo temp = *this;
	Nguyen++;
	return temp;
}

CHonSo CHonSo::operator--()
{
	Nguyen--;
	return *this;
}

CHonSo CHonSo::operator--(int)
{
	CHonSo temp = *this;
	Nguyen--;
	return temp;
}