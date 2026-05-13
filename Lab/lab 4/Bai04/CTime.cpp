#include "CTime.h"

CTime::CTime()
{
	Gio = 0;
	Phut = 0;
	Giay = 0;
}

CTime::CTime(int h, int m, int s)
{
	Gio = h;
	Phut = m;
	Giay = s;

	ChuanHoa();
}

void CTime::ChuanHoa()
{
	int TongGiay = Gio * 3600 + Phut * 60 + Giay;

	TongGiay %= 24 * 3600;

	if (TongGiay < 0)
		TongGiay += 24 * 3600;

	Gio = TongGiay / 3600;
	TongGiay %= 3600;

    Phut = TongGiay / 60;
	Giay = TongGiay % 60;
}

istream& operator>>(istream& is, CTime& t)
{
	cout << "Nhap gio: ";
	is >> t.Gio;
	cout << "Nhap phut: ";
	is >> t.Phut;
	cout << "Nhap giay: ";
	is >> t.Giay;

	t.ChuanHoa();

	return is;
}

ostream& operator<<(ostream& os, const CTime& t)
{
	os  << t.Gio << " gio "
		<< t.Phut << " phut "
		<< t.Giay << " giay";

	return os;
}

CTime CTime::operator+(int x)
{
	CTime temp;

	temp.Gio = Gio;
	temp.Phut = Phut;
	temp.Giay = Giay + x;

	temp.ChuanHoa();

	return temp;
}

CTime CTime::operator-(int x)
{
	CTime temp;

	temp.Gio = Gio;
	temp.Phut = Phut;
	temp.Giay = Giay - x;

	temp.ChuanHoa();

	return temp;
}

CTime& CTime::operator++()
{
	Giay++;
	this->ChuanHoa();

	return *this;
}

CTime CTime::operator++(int)
{
	CTime temp = *this;
	Giay++;
	this->ChuanHoa();

	return temp;
}

CTime& CTime::operator--()
{
	Giay--;
	this->ChuanHoa();

	return *this;
}

CTime CTime::operator--(int)
{
	CTime temp = *this;
	Giay--;
	this->ChuanHoa();

	return temp;
}