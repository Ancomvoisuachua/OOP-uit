#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class CPhanSo
{
    private:
        int Tuso;
        int Mauso;

    public:
        void NhapPS();
        void XuatPS();
        bool LonHon(CPhanSo a);

        static void NhapDanhSachPS(CPhanSo a[], int& n);
        static void XuatDanhSachPS(CPhanSo a[], int n);
        static CPhanSo TimPSLonNhat(CPhanSo a[], int n);
        static void SortTang(CPhanSo a[], int n);
        static void SortGiam(CPhanSo a[], int n);
};