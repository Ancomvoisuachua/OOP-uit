#include<iostream>
#include<math.h>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
float KhoangCach(DIEM, DIEM);
float ChuVi(TAMGIAC);
float DienTich(TAMGIAC);
DIEM TrongTam(TAMGIAC t);

int main()
{
	TAMGIAC t;

	Nhap(t);

	float P = ChuVi(t);
	float S = DienTich(t);

	Xuat(t);

	cout << "Chu vi = " << P << "\n";
	cout << "Dien tich = " << S << "\n";

	DIEM G = TrongTam(t);
	cout << "Toa do trong tam: ";
	Xuat(G);

	return 1;
}

void Nhap(DIEM& D)
{
	cout << "Nhap x: " << endl;
	cin >> D.x;

	cout << "Nhap y: " << endl;
	cin >> D.y;
}

void Xuat(DIEM D)
{
	cout << D.x << " " << D.y << endl;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return (float)sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap diem A : " << endl;
	Nhap(t.A);

	cout << "Nhap diem B : " << endl;
	Nhap(t.B);

	cout << "Nhap diem C : " << endl;
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "Diem A: " << endl;
	Xuat(t.A);

	cout << "Diem B: " << endl;
	Xuat(t.B);

	cout << "Diem C: " << endl;
	Xuat(t.C);
}

float ChuVi(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);

	return (a + b + c);
}

float DienTich(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	float p = (a + b + c) / 2;

	return (float)sqrt(p * (p - a) * (p - b) * (p - c));
}

DIEM TrongTam(TAMGIAC t)
{
	DIEM G;
	G.x = (t.A.x + t.B.x + t.C.x) / 3;
	G.y = (t.A.y + t.B.y + t.C.y) / 3;
	return G;
}