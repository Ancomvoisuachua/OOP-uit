#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#include "CToaDo.h"

int main()
{
    CToaDo p1;
    CToaDo p2;

    cout << "Nhap diem thu 1 \n";
    p1.Nhap();
    cout << "Nhap diem thu 2 \n";
    p2.Nhap();

    p1.Xuat();
    p2.Xuat();

    cout << "Khoang cach giua 2 diem la: " << p1.KhoangCach(p2);
}