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

    cout << "Tong cua 2 phan so la: \n";
    p1.Tong(p2).Xuat();
    cout << "Hieu cua 2 phan so la: \n";
    p1.Hieu(p2).Xuat();
    cout << "Tich cua 2 phan so la: \n";
    p1.Tich(p2).Xuat();
    cout << "Thuong cua 2 phan so la: \n";
    p1.Thuong(p2).Xuat();

    return 1;
}