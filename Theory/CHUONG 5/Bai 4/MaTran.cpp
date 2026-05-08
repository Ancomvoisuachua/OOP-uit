#include "MaTran.h"
#include <cstdlib>
#include <ctime>

MaTran::MaTran() {
    m = n = 0;
}

MaTran::MaTran(int m, int n) {
    this->m = m;
    this->n = n;
    a.resize(m, vector<int>(n));
}

void MaTran::randomMatrix(int m, int n) {
    this->m = m;
    this->n = n;
    a.resize(m, vector<int>(n));

    srand(time(0));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 10; 
}

istream& operator>>(istream& in, MaTran& mt) {
    cout << "Nhap so dong va cot: ";
    in >> mt.m >> mt.n;

    mt.a.resize(mt.m, vector<int>(mt.n));

    for (int i = 0; i < mt.m; i++)
        for (int j = 0; j < mt.n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            in >> mt.a[i][j];
        }

    return in;
}

ostream& operator<<(ostream& out, const MaTran& mt) {
    for (int i = 0; i < mt.m; i++) {
        for (int j = 0; j < mt.n; j++) {
            out << mt.a[i][j] << " ";
        }
        out << endl;
    }
    return out;
}

MaTran MaTran::operator+(const MaTran& other) {
    MaTran kq(m, n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            kq.a[i][j] = a[i][j] + other.a[i][j];

    return kq;
}

MaTran MaTran::operator-(const MaTran& other) {
    MaTran kq(m, n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            kq.a[i][j] = a[i][j] - other.a[i][j];

    return kq;
}

MaTran MaTran::operator*(const MaTran& other) {
    MaTran kq(m, other.n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < other.n; j++) {
            kq.a[i][j] = 0;
            for (int k = 0; k < n; k++) {
                kq.a[i][j] += a[i][k] * other.a[k][j];
            }
        }

    return kq;
}