#include<iostream> 
using namespace std;
struct Sophuc
{
	float Thuc;
	float Ao;
};
typedef struct Sophuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
SOPHUC Thuong(SOPHUC, SOPHUC);

int main() {
	SOPHUC x, y;

	Nhap(x);
	Nhap(y);

	cout << "Hai so phuc vua nhap la: " << endl;
	Xuat(x);
	Xuat(y);

	SOPHUC tong = Tong(x, y);
	SOPHUC hieu = Hieu(x, y);
	SOPHUC tich = Tich(x, y);
	SOPHUC thuong = Thuong(x, y);

	cout << "Tong 2 phan so la: " << endl;
	Xuat(tong);

	cout << "Hieu 2 phan so la: " << endl;
	Xuat(hieu);

	cout << "Tich 2 phan so la: " << endl;
	Xuat(tich);

	cout << "Thuong 2 phan so la: " << endl;
	Xuat(thuong);

	return 1;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: " << endl;
	cin >> x.Thuc;

	cout << "Nhap phan ao: " << endl;
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << x.Thuc << " + " << x.Ao << endl;
}

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;

	return temp;
}

SOPHUC Hieu(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc - y.Thuc;
	temp.Ao = x.Ao - y.Ao;

	return temp;
}

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;

	return temp;
}

SOPHUC Thuong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = (x.Thuc * y.Thuc + x.Ao * y.Ao) / (y.Thuc * y.Thuc + y.Ao * y.Ao);
	temp.Ao = (x.Ao * y.Thuc - x.Thuc * y.Ao) / (y.Thuc * y.Thuc + y.Ao * y.Ao);

	return temp;
}