#pragma once
#include <iostream>
#include <vector>
using namespace std;

class DaThuc {
private:
    vector<double> a; 

public:
    DaThuc();
    DaThuc(int n);

    friend istream& operator>>(istream& in, DaThuc& dt);
    friend ostream& operator<<(ostream& out, const DaThuc& dt);
    double tinhGiaTri(double x) const;
    DaThuc operator+(const DaThuc& other);
};

