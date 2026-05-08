#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

class CPhanSo
{
    private:
        int Tu;
        int Mau;
    public:
        void Nhap();
        void Xuat();
        CPhanSo Tong(CPhanSo);
        CPhanSo Hieu(CPhanSo);
        CPhanSo Tich(CPhanSo);
        CPhanSo Thuong(CPhanSo);
};