#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
#include "CPhanSo.h"

int main()
{
    CPhanSo p1;
    CPhanSo p2;

    cout << "Nhap vao phan so thu 1: \n";
    p1.Nhap();
    cout << "Nhap vao phan so thu 2: \n";
    p2.Nhap();

    p1.Xuat();
    p2.Xuat();

    cout << "Phan so lon nhat la: \n";
    p1.PhanSoLonNhat(p2);
    return 1;
}
