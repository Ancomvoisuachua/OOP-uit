#pragma once
#include <iostream>
#include <vector>
using namespace std;

class MaTran {
private:
    int m, n;
    vector<vector<int>> a;

public:
    MaTran();
    MaTran(int m, int n);

    void randomMatrix(int m, int n);
    friend istream& operator>>(istream& in, MaTran& mt);
    friend ostream& operator<<(ostream& out, const MaTran& mt);
    MaTran operator+(const MaTran& other);
    MaTran operator-(const MaTran& other);
    MaTran operator*(const MaTran& other);
};
