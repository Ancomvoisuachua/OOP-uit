#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Diem{
private:
	int x, y;
public:
	void nhap()
	{
        cout << "Nhap x y: ";
        cin >> x >> y;
	}
	float khoangcach(Diem d)
	{
        return sqrt((x - d.x) * (x - d.x) + (y - d.y) * (y - d.y));
	}
    void xuat()
    {
        cout << "(" << x << ", " << y << ")";
    }
};

int main()
{
	Diem A, B;
    cout << "Nhap diem A:\n";
    A.nhap();

    cout << "Nhap diem B:\n";
    B.nhap();

    double d = A.khoangcach(B);

    cout << "Khoang cach giua ";
    A.xuat();
    cout << " va ";
    B.xuat();
    cout << " = " << d << endl;

    return 0;
}