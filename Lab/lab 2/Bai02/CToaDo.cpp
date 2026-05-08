#include "CToaDo.h"

void CToaDo::Nhap()
{
    cout << "Nhap diem Ox: ";
    cin >> Ox;
    cout << "Nhap diem Oy: ";
    cin >> Oy;
}

void CToaDo::Xuat()
{
    cout << "(" << Ox << "," << Oy << ")" << endl;
}

float CToaDo::KhoangCach(CToaDo p)
{
    return sqrt((p.Ox - Ox) * (p.Ox - Ox) + (p.Oy - Oy) * (p.Oy - Oy));
}