#pragma once
#include <iostream>
using namespace std;

class CDaThuc
{
    private:
        int n;         
        float a[1000];      

    public:
        CDaThuc();
        CDaThuc(const CDaThuc& other);
        ~CDaThuc();

        CDaThuc GiamBac();
        int BacLonNhat(const CDaThuc& other);

        friend istream& operator>>(istream& is, CDaThuc& dt);
        friend ostream& operator<<(ostream& os, const CDaThuc& dt);

        CDaThuc operator+(const CDaThuc& other);
        CDaThuc operator-(const CDaThuc& other);
        CDaThuc operator*(const CDaThuc& other);
        CDaThuc operator/(const CDaThuc& other);

        CDaThuc& operator+=(const CDaThuc& other);
        CDaThuc& operator-=(const CDaThuc& other);
        CDaThuc& operator*=(const CDaThuc& other);
        CDaThuc& operator/=(const CDaThuc& other);

        CDaThuc& operator=(const CDaThuc& other);

        bool operator==(const CDaThuc& other) const;
        bool operator!=(const CDaThuc& other) const;
};