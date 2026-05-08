#include "DaThuc.h"
#include "DaThuc.h"
#include <cmath>

DaThuc::DaThuc() {
    a.push_back(0);
}

DaThuc::DaThuc(int n) {
    a.resize(n + 1);
}

istream& operator>>(istream& in, DaThuc& dt) {
    int n;
    cout << "Nhap bac da thuc: ";
    in >> n;

    dt.a.resize(n + 1);

    for (int i = n; i >= 0; i--) {
        cout << "He so x^" << i << ": ";
        in >> dt.a[i];
    }
    return in;
}

ostream& operator<<(ostream& out, const DaThuc& dt) {
    int n = dt.a.size() - 1;

    bool first = true;
    for (int i = n; i >= 0; i--) {
        if (dt.a[i] == 0) continue;

        if (!first) {
            if (dt.a[i] > 0) out << " + ";
            else out << " - ";
        }
        else {
            if (dt.a[i] < 0) out << "-";
            first = false;
        }

        double val = abs(dt.a[i]);

        if (i == 0)
            out << val;
        else if (i == 1)
            out << val << "x";
        else
            out << val << "x^" << i;
    }

    if (first) out << "0"; 

    return out;
}

double DaThuc::tinhGiaTri(double x) const {
    double res = 0;
    for (int i = 0; i < a.size(); i++) {
        res += a[i] * pow(x, i);
    }
    return res;
}

DaThuc DaThuc::operator+(const DaThuc& other) {
    int maxDeg = max(a.size(), other.a.size());
    DaThuc kq;
    kq.a.resize(maxDeg, 0);

    for (int i = 0; i < maxDeg; i++) {
        if (i < a.size()) kq.a[i] += a[i];
        if (i < other.a.size()) kq.a[i] += other.a[i];
    }
    return kq;
}