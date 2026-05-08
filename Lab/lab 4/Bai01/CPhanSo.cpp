#include "CPhanSo.h"
#include "CHonSo.h"

CPhanSo::CPhanSo()
{

}

CPhanSo::CPhanSo(int t, int m)
{
	Tu = t;
	Mau = m;
}

void CPhanSo::RutGon()
{
	int a = abs(Tu);
	int b = abs(Mau);

	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	Tu /= (a + b);
	Mau /= (a + b);
}

CPhanSo CPhanSo::operator+(const CPhanSo& x)
{
	CPhanSo temp;
	temp.Tu = Tu * x.Mau + Mau * x.Tu;
	temp.Mau = Mau * x.Mau;
	return temp;
}

CPhanSo CPhanSo::operator-(const CPhanSo& x)
{
	CPhanSo temp;
	temp.Tu = Tu * x.Mau - Mau * x.Tu;
	temp.Mau = Mau * x.Mau;
	return temp;
}

CPhanSo CPhanSo::operator*(const CPhanSo& x)
{
	CPhanSo temp;
	temp.Tu = Tu * x.Tu;
	temp.Mau = Mau * x.Mau;
	return temp;
}

CPhanSo CPhanSo::operator/(const CPhanSo& x)
{
	CPhanSo temp;
	temp.Tu = Tu * x.Mau;
	temp.Mau = Mau * x.Tu;
	return temp;
}

CHonSo CPhanSo::ChuyenSangHonSo()
{
	CHonSo temp(Tu/Mau, Tu % Mau, Mau);
	return temp;
}

bool CPhanSo::operator==(const CPhanSo& x) const
{
	return Tu * x.Mau == Mau * x.Tu;
}

bool CPhanSo::operator!=(const CPhanSo& x) const
{
	return !(*this == x);
}

bool CPhanSo::operator>(const CPhanSo& x) const
{
	return Tu * x.Mau > Mau * x.Tu;
}

bool CPhanSo::operator<(const CPhanSo& x) const
{
	return Tu * x.Mau < Mau * x.Tu;
}

bool CPhanSo::operator>=(const CPhanSo& x) const
{
	return !(*this < x);
}

bool CPhanSo::operator<=(const CPhanSo& x) const
{
	return !(*this > x);
}