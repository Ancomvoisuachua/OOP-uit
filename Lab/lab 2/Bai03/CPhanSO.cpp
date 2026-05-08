#include "CPhanSo.h"

void CPhanSo::Nhap()
{
    cout << "Nhap Tu so: \n";
    cin >> Tu;
    cout << "Nhap Mau so: \n";
    cin >> Mau;
}

void CPhanSo::Xuat()
{
    cout << Tu << "/" << Mau << endl;
}

void CPhanSo::PhanSoLonNhat(CPhanSo p)
{
    if (Tu * p.Mau > Mau * p.Tu) cout << Tu << "/" << Mau;
    else if (Tu * p.Mau < Mau * p.Tu) cout << p.Tu << "/" << p.Mau;
    else cout << 0;
}