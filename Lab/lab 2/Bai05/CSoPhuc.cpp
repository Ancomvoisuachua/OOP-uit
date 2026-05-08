#include "CSoPhuc.h"

void CSoPhuc::Nhap()
{
    cout << "Nhap phan thuc: \n";
    cin >> Thuc;
    cout << "Nhap phan Ao: \n";
    cin >> Ao;
}

void CSoPhuc::Xuat()
{
    if (Ao < 0) cout << Thuc << "-" << -1 * Ao << "i" << endl;
    else cout << Thuc << "+" << Ao << "i" << endl;
}

CSoPhuc CSoPhuc::Tong(CSoPhuc x)
{
    CSoPhuc temp;
    temp.Thuc = Thuc + x.Thuc;
    temp.Ao = Ao + x.Ao;
    return temp;
}

CSoPhuc CSoPhuc::Hieu(CSoPhuc x)
{
    CSoPhuc temp;
    temp.Thuc = Thuc - x.Thuc;
    temp.Ao = Ao - x.Ao;
    return temp;
}

CSoPhuc CSoPhuc::Tich(CSoPhuc x)
{
    CSoPhuc temp;
    temp.Thuc = Thuc * x.Thuc - Ao * x.Ao;
    temp.Ao = Thuc * x.Ao + Ao * x.Thuc;
    return temp;
}