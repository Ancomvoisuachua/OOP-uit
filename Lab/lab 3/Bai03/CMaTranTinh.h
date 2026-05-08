#pragma once
#include <iostream>
using namespace std;

class CMaTranTinh
{
    private:
        int m, n;
        float a[100][100];
    public:
        CMaTranTinh();
        CMaTranTinh(float b[][1000], int, int);
        CMaTranTinh(const CMaTranTinh&);
        ~CMaTranTinh();
        void Nhap();
        void Xuat();
};