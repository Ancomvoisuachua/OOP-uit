#include "CDaThuc.h"

CDaThuc::CDaThuc()
{
	n = 0;
	a[0] = 0;
}

CDaThuc::CDaThuc(const CDaThuc& other)
{
	n = other.n;

	for (int i = 0; i <= n; i++)
		a[i] = other.a[i];
}

CDaThuc::~CDaThuc() {};

CDaThuc CDaThuc::GiamBac()
{
	while (n > 0 && a[n] == 0)
		n--;

	return *this;
}

int	CDaThuc::BacLonNhat(const CDaThuc& other)
{
	if (n > other.n)
		return n;
	return other.n;
}

istream& operator>>(istream& is, CDaThuc& dt)
{
	cout << "Nhap bac da thuc: ";
	is >> dt.n;

	for (int i = dt.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		is >> dt.a[i];
	}

	dt.GiamBac();

	return is;
}

ostream& operator<<(ostream& os, const CDaThuc& dt)
{
	bool printed = false;
	for (int i = dt.n; i >= 0; i--)
	{
		float coeff = dt.a[i];

		if (coeff == 0)   
			continue;

		if (printed && coeff > 0) 
			os << " + ";
		if (printed && coeff < 0)
			os << " - ";

		if (abs(coeff) != 1 || i == 0) 
			os << abs(coeff);

		if (i > 0)		
			os << "x";
		if (i > 1)		
			os << "^" << i;

		printed = true;
	}
	if (!printed) os << "0";

	return os;
}

CDaThuc CDaThuc::operator+(const CDaThuc& other)
{
	CDaThuc temp;
	temp.n = BacLonNhat(other);

	for (int i = 0; i <= temp.n; i++) 
		temp.a[i] = 0;
	for (int i = 0; i <= this->n; i++)
		temp.a[i] += this->a[i];
	for (int i = 0; i <= other.n; i++)
		temp.a[i] += other.a[i];

	temp.GiamBac();

	return temp;
}

CDaThuc CDaThuc::operator-(const CDaThuc& other)
{
	CDaThuc temp;
	temp.n = BacLonNhat(other);

	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i <= this->n; i++)
		temp.a[i] += this->a[i];
	for (int i = 0; i <= other.n; i++)
		temp.a[i] -= other.a[i];

	temp.GiamBac();

	return temp;
}

CDaThuc CDaThuc::operator*(const CDaThuc& other)
{
	CDaThuc temp;
	temp.n = n + other.n;

	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;

	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= other.n; j++)
			temp.a[i + j] += a[i] * other.a[j];

	temp.GiamBac();

	return temp;
}

CDaThuc CDaThuc::operator/(const CDaThuc& other)
{
	CDaThuc temp;

	if (n < other.n)
	{
		temp.n = 0;
		temp.a[0] = 0;
		return temp;
	}

	temp.n = n - other.n;
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;

	CDaThuc bc = *this;
	for (int i = n; i >= other.n; i--)
	{
		temp.a[i - other.n] =
			bc.a[i] / other.a[other.n];
		for (int j = 0; j <= other.n; j++)
		{
			bc.a[i - j] -=
				temp.a[i - other.n] * other.a[other.n - j];
		}
	}

	temp.GiamBac();

	return temp;
}

CDaThuc& CDaThuc::operator+=(const CDaThuc& other)
{
	CDaThuc temp;
	temp.n = BacLonNhat(other);

	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i <= n; i++)
		temp.a[i] += a[i];
	for (int i = 0; i <= other.n; i++)
		temp.a[i] += other.a[i];

	temp.GiamBac();
	*this = temp;

	return *this;
}

CDaThuc& CDaThuc::operator-=(const CDaThuc& other)
{
	CDaThuc temp;
	temp.n = BacLonNhat(other);

	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i <= n; i++)
		temp.a[i] += a[i];
	for (int i = 0; i <= other.n; i++)
		temp.a[i] -= other.a[i];

	temp.GiamBac();
	*this = temp;

	return *this;
}

CDaThuc& CDaThuc::operator*=(const CDaThuc& other)
{
	CDaThuc temp;
	temp.n = n + other.n;

	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;

	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= other.n; j++)
			temp.a[i + j] += a[i] * other.a[j];

	temp.GiamBac();
	*this = temp;

	return *this;
}

CDaThuc& CDaThuc::operator/=(const CDaThuc& other)
{
	CDaThuc temp;

	if (n < other.n)
	{
		temp.n = 0;
		temp.a[0] = 0;
		return temp;
	}

	temp.n = n - other.n;
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;

	CDaThuc bc = *this;
	for (int i = n; i >= other.n; i--)
	{
		temp.a[i - other.n] =
			bc.a[i] / other.a[other.n];
		for (int j = 0; j <= other.n; j++)
		{
			bc.a[i - j] -=
				temp.a[i - other.n] * other.a[other.n - j];
		}
	}

	temp.GiamBac();
	*this = temp;

	return *this;
}

CDaThuc& CDaThuc::operator=(const CDaThuc& other)
{
	n = other.n;

	for (int i = 0; i <= n; i++)
		a[i] = other.a[i];

	return *this;
}

bool CDaThuc::operator==(const CDaThuc& other) const
{
	if (n != other.n)
		return false;

	for (int i = 0; i <= n; i++)
		if (a[i] != other.a[i])
			return false;

	return true;
}

bool CDaThuc::operator!=(const CDaThuc& other) const
{
	if (n != other.n)
		return true;

	for (int i = 0; i <= n; i++)
		if (a[i] != other.a[i])
			return true;

	return false;
}