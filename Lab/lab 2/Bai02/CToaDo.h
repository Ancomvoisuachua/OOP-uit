#pragma once
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class CToaDo
{
    private:
        float Ox;
        float Oy;
    public:
        void Nhap();
        void Xuat();
        float KhoangCach(CToaDo p);
};