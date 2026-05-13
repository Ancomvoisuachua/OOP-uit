#pragma once
#include <iostream>
using namespace std;

class CSoPhuc
{
    private:
        double Thuc;
        double Ao;

    public:
        CSoPhuc();
        CSoPhuc(double thuc, double ao);

        friend istream& operator>>(istream& is, CSoPhuc& sp);
        friend ostream& operator<<(ostream& os, const CSoPhuc& sp);

        CSoPhuc operator+(const CSoPhuc& other);
        CSoPhuc operator-(const CSoPhuc& other);
        CSoPhuc operator*(const CSoPhuc& other);
        CSoPhuc operator/(const CSoPhuc& other);

        CSoPhuc& operator+=(const CSoPhuc& other);
        CSoPhuc& operator-=(const CSoPhuc& other);
        CSoPhuc& operator*=(const CSoPhuc& other);
        CSoPhuc& operator/=(const CSoPhuc& other);
        CSoPhuc& operator =(const CSoPhuc& other);

        bool operator==(const CSoPhuc& other) const;
        bool operator!=(const CSoPhuc& other) const;
        bool operator<(const CSoPhuc& other) const;
        bool operator>(const CSoPhuc& other) const;
        bool operator<=(const CSoPhuc& other) const;
        bool operator>=(const CSoPhuc& other) const;
};

