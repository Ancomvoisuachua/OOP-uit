#include <iostream>
using namespace std;

class DaThuc {
private:
    int n;        
    double* a;    

public:
    DaThuc(int bac = 0);
    ~DaThuc();

    void Nhap();
    void Xuat();
    double TinhGiaTri(double x);
    DaThuc Cong(const DaThuc& dt);
    DaThuc Tru(const DaThuc& dt);
};

DaThuc::DaThuc(int bac) {
    n = bac;
    a = new double[n + 1];
    for (int i = 0; i <= n; i++) a[i] = 0;
}

DaThuc::~DaThuc() {
    delete[] a;
}

void DaThuc::Nhap() {
    cout << "Nhap bac n = ";
    cin >> n;

    delete[] a;
    a = new double[n + 1];

    for (int i = n; i >= 0; i--) 
        cin >> a[i];
}

void DaThuc::Xuat() {
    for (int i = n; i >= 0; i--) {
        if (a[i] == 0) continue;

        if (i != n && a[i] > 0) cout << "+";

        cout << a[i];

        if (i > 0) cout << "x";
        if (i > 1) cout << "^" << i;
    }
    cout << endl;
}

double DaThuc::TinhGiaTri(double x) {
    double sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += a[i] * pow(x, i);
    }
    return sum;
}

DaThuc DaThuc::Cong(const DaThuc& dt) {
    int maxBac = max(n, dt.n);
    DaThuc kq(maxBac);

    for (int i = 0; i <= maxBac; i++) {
        double hs1 = (i <= n) ? a[i] : 0;
        double hs2 = (i <= dt.n) ? dt.a[i] : 0;
        kq.a[i] = hs1 + hs2;
    }
    return kq;
}

DaThuc DaThuc::Tru(const DaThuc& dt) {
    int maxBac = max(n, dt.n);
    DaThuc kq(maxBac);

    for (int i = 0; i <= maxBac; i++) {
        double hs1 = (i <= n) ? a[i] : 0;
        double hs2 = (i <= dt.n) ? dt.a[i] : 0;
        kq.a[i] = hs1 - hs2;
    }
    return kq;
}

int main() {
    DaThuc dt1, dt2;

    cout << "Nhap da thuc 1:\n";
    dt1.Nhap();

    cout << "Nhap da thuc 2:\n";
    dt2.Nhap();

    cout << "\nDa thuc 1: ";
    dt1.Xuat();

    cout << "Da thuc 2: ";
    dt2.Xuat();

    DaThuc tong = dt1.Cong(dt2);
    cout << "Tong hai da thuc: ";
    tong.Xuat();

    DaThuc hieu = dt1.Tru(dt2);
    cout << "Hieu hai da thuc: ";
    hieu.Xuat();

    double x;
    cout << "Nhap x: ";
    cin >> x;
    cout << "P1(" << x << ") = " << dt1.TinhGiaTri(x) << endl;

    return 0;
}