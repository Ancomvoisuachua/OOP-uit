#include "CPhanSo.h"

int main()
{
    CPhanSo a[100];
    int n;

    CPhanSo::NhapDanhSachPS(a, n);

    cout << "Danh sach vua nhap: " << endl;
    CPhanSo::XuatDanhSachPS(a, n);

    CPhanSo PSLonNhat = CPhanSo::TimPSLonNhat(a, n);
    cout << "Phan so lon nhat: " << endl;
    PSLonNhat.XuatPS();
    cout << endl;

    CPhanSo::SortTang(a, n);
    cout << "Tang dan: " << endl;
    CPhanSo::XuatDanhSachPS(a, n);

    CPhanSo::SortGiam(a, n);
    cout << "Giam dan: " << endl;
    CPhanSo::XuatDanhSachPS(a, n);

    return 1;
}