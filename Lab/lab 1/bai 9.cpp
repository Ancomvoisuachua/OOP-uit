#include<iostream> 
using namespace std;
struct diem
{
	float x;
	float y;
};

typedef struct diem DIEM;
struct duongtron
{
	DIEM O;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
float ChuVi(DUONGTRON);
float DienTich(DUONGTRON);

int main()
{
	DUONGTRON c;

	Nhap(c);

	float P = ChuVi(c);
	float S = DienTich(c);

	Xuat(c);

	cout << "Chu vi = " << P << endl;
	cout << "Dien tich = " << S << endl;
	return 1;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;

	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << ", " << P.y << ")" << endl;
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam O: " << endl;
	Nhap(c.O);

	cout << "Nhap ban kinh R: " << endl;
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "Tam O: ";
	Xuat(c.O);

	cout << "Ban kinh R: " << c.R << endl;
}

float ChuVi(DUONGTRON c)
{
	return 2 * 3.14 * c.R;
}

float DienTich(DUONGTRON c)
{
	return 3.14 * c.R * c.R;
}