#include <iostream>
#include <string>
using namespace std;
const double PI = 3.141592653589793;

class Diem {
private:
	float x, y;
	float r;
public:
	Diem()
	{
		x = y = 0;
		r = 1;
	}

	Diem(float x, float y, float r)
	{
		this->x = x;
		this->y = y;
		this->r = r;
	}

	void nhap()
	{
		cout << "Nhap toa do tam: \n";
		cin >> x >> y;
		cout << "Nhap ban kinh: \n";
		cin >> r;
	}

	float DienTich()
	{
		return PI * r * r;
	}

	float ChuVi()
	{
		return 2 * PI * r;
	}

	void xuat() 
	{
		cout << "Tam: (" << x << ", " << y << ")" << '\n';
		cout << "Ban kinh: " << r << '\n';
		cout << "Chu vi: " << ChuVi() << '\n';
		cout << "Dien tich: " << DienTich() << '\n';
	}
};

int main()
{
	Diem d;
	d.nhap();
	d.xuat();
	return 0;
}