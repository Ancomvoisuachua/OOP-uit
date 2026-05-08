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

CPhanSo CPhanSo::Tong(CPhanSo p)
{
    CPhanSo rs;
    rs.Tu = Tu * p.Mau + p.Tu * Mau;
    rs.Mau = Mau * p.Mau;

    return rs;
}

CPhanSo CPhanSo::Hieu(CPhanSo p)
{
    CPhanSo rs;
    rs.Tu = Tu * p.Mau - p.Tu * Mau;
    rs.Mau = Mau * p.Mau;

    return rs;
}

CPhanSo CPhanSo::Tich(CPhanSo p)
{
    CPhanSo rs;
    rs.Tu = Tu * p.Tu;
    rs.Mau = Mau * p.Mau;

    return rs;
}

CPhanSo CPhanSo::Thuong(CPhanSo p)
{
    CPhanSo rs;
    rs.Tu = Tu * p.Mau;
    rs.Mau = Mau * p.Tu;

    return rs;
}