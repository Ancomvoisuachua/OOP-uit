#pragma once
#include<iostream>
#include<math.h>
using namespace std;

class CSoPhuc
{
    private:
        float Thuc;
        float Ao;
    public:
        void Nhap();
        void Xuat();
        CSoPhuc Tong(CSoPhuc);
        CSoPhuc Hieu(CSoPhuc);
        CSoPhuc Tich(CSoPhuc);
};