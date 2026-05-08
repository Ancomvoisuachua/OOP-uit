#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
#include "CSoPhuc.h"

int main()
{
    CSoPhuc s1;
    CSoPhuc s2;

    cout << "Nhap vao so phuc thu 1: \n";
    s1.Nhap();
    cout << "Nhap vao so phuc thu 2: \n";
    s2.Nhap();

    cout << "So phuc vua nhap:\n";
    s1.Xuat();
    s2.Xuat();

    cout << "Tong cua 2 so phuc la: \n";
    s1.Tong(s2).Xuat();
    cout << "Hieu cua 2 phan so la: \n";
    s1.Hieu(s2).Xuat();
    cout << "Tich cua 2 phan so la: \n";
    s1.Tich(s2).Xuat();

    return 1;
}