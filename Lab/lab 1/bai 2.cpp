#include<iostream>
#include<math.h>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);

int main()
{
	DIEM P, Q;

	cout << "Nhap diem thu nhat: " << endl;
	Nhap(P);

	cout << "Nhap diem thu hai: " << endl;
	Nhap(Q);

	cout << "Diem thu nhat la: " << endl;
	Xuat(P);

	cout << "Diem thu hai la: " << endl;
	Xuat(Q);

	float kc = KhoangCach(P, Q);
	cout << "Khoang cach giua hai diem = " << kc;

	return 1;
}

void Nhap(DIEM& D)
{
	cin >> D.x >> D.y;
}

void Xuat(DIEM D)
{
	cout << D.x << " " << D.y << endl;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}