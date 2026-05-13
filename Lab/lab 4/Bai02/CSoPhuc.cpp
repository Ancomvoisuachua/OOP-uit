#include "CSoPhuc.h"

CSoPhuc::CSoPhuc()
{
	Thuc = 0;
	Ao = 0;
}

CSoPhuc::CSoPhuc(double t, double a)
{
	Thuc = t;
	Ao = a;
}

istream& operator>>(istream& is, CSoPhuc& sp)
{
	cout << "Nhap phan thuc: ";
	is >> sp.Thuc;

	cout << "Nhap phan ao: ";
	is >> sp.Ao;

	return is;
}

ostream& operator<<(ostream& os, const CSoPhuc& sp)
{
	if (sp.Thuc == 0 && sp.Ao == 0)
		os << "0";
	else if (sp.Thuc == 0)
		os << sp.Ao << "i";
	else if (sp.Ao == 0)
		os << sp.Thuc;
	else if (sp.Ao > 0)
		os << sp.Thuc << " + " << sp.Ao << "i";
	else
		os << sp.Thuc << " - " << -sp.Ao << "i";

	return os;
}

CSoPhuc CSoPhuc::operator+(const CSoPhuc& other)
{
	CSoPhuc temp;
	temp.Thuc = Thuc + other.Thuc;
	temp.Ao = Ao + other.Ao;

	return temp;
}

CSoPhuc CSoPhuc::operator-(const CSoPhuc& other)
{
	CSoPhuc temp;
	temp.Thuc = Thuc - other.Thuc;
	temp.Ao = Ao - other.Ao;

	return temp;
}

CSoPhuc CSoPhuc::operator*(const CSoPhuc& other)
{
	CSoPhuc temp;
	temp.Thuc = Thuc * other.Thuc - Ao * other.Ao;
	temp.Ao = Thuc * other.Ao + Ao * other.Thuc;

	return temp;
}

CSoPhuc CSoPhuc::operator/(const CSoPhuc& other)
{
	CSoPhuc temp;
	double m = other.Thuc * other.Thuc + other.Ao * other.Ao;
	temp.Thuc = (Thuc * other.Thuc + Ao * other.Ao) / m;
	temp.Ao = (Ao * other.Thuc - Thuc * other.Ao) / m;

	return temp;
}


CSoPhuc& CSoPhuc::operator+=(const CSoPhuc& other)
{
	Thuc += other.Thuc;
	Ao += other.Ao;

	return *this;
}

CSoPhuc& CSoPhuc::operator-=(const CSoPhuc& other)
{
	Thuc -= other.Thuc;
	Ao -= other.Ao;

	return *this;
}

CSoPhuc& CSoPhuc::operator*=(const CSoPhuc& other)
{
	CSoPhuc temp;
	temp.Thuc = Thuc * other.Thuc - Ao * other.Ao;
	temp.Ao = Thuc * other.Ao + Ao * other.Thuc;
	
	*this = temp;

	return *this;
}

CSoPhuc& CSoPhuc::operator/=(const CSoPhuc& other)
{
	CSoPhuc temp;
	double m = other.Thuc * other.Thuc + other.Ao * other.Ao;
	temp.Thuc = (Thuc * other.Thuc + Ao * other.Ao) / m;
	temp.Ao = (Ao * other.Thuc - Thuc * other.Ao) / m;

	*this = temp;
	
	return *this;
}

CSoPhuc& CSoPhuc::operator=(const CSoPhuc& other)
{
	if (this != &other)
	{
		Thuc = other.Thuc;
		Ao = other.Ao;
	}

	return *this;
}

bool CSoPhuc::operator==(const CSoPhuc& other) const
{
	return Thuc == other.Thuc && Ao == other.Ao;
}

bool CSoPhuc::operator!=(const CSoPhuc& other) const
{
	return !(*this == other);
}

bool CSoPhuc::operator<(const CSoPhuc& other) const
{
	double mod1 = Thuc * Thuc + Ao * Ao;
	double mod2 = other.Thuc * other.Thuc + other.Ao * other.Ao;

	return mod1 < mod2;
}

bool CSoPhuc::operator>(const CSoPhuc& other) const
{
	return other < *this;
}

bool CSoPhuc::operator<=(const CSoPhuc& other) const
{
	return !(*this > other);
}

bool CSoPhuc::operator>=(const CSoPhuc& other) const
{
	return !(*this < other);
}