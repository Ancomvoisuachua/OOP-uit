#include "CPhanSo.h"

static int n = 0;

void CPhanSo::NhapPS()
{
    cout << "Nhap tu so: ";
    cin >> Tuso;

    do
    {
        cout << "Nhap mau so: ";
        cin >> Mauso;
    } while (Mauso == 0);
}

void CPhanSo::NhapDanhSachPS(CPhanSo a[], int& n)
{
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Phan so thu " << i + 1 << ":\n";
        a[i].NhapPS();
    }
}

void CPhanSo::XuatPS()
{
    if (Mauso == 1) cout << Tuso;
    else if (Tuso == 0) cout << 0;
    else cout << Tuso << "/" << Mauso;
}

void CPhanSo::XuatDanhSachPS(CPhanSo a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i].XuatPS();
        cout << " ";
    }
    cout << endl;
}

bool CPhanSo::LonHon(CPhanSo x)
{
    return Tuso * x.Mauso > x.Tuso * Mauso;
}

CPhanSo CPhanSo::TimPSLonNhat(CPhanSo a[], int n)
{
    CPhanSo Max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i].LonHon(Max))
        {
            Max = a[i];
        }
    }
    return Max;
}

void CPhanSo::SortTang(CPhanSo a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        CPhanSo key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j].LonHon(key)) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void CPhanSo::SortGiam(CPhanSo a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        CPhanSo key = a[i];
        int j = i - 1;

        while (j >= 0 && ! a[j].LonHon(key)) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}