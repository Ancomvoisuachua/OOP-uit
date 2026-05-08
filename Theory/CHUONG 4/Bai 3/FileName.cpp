#include <iostream>
#include <cmath>
using namespace std;

class DonThuc {
private:
    double a; 
    int b;   

public:
    DonThuc(double hs = 0, int sm = 0);

    void Nhap();
    void Xuat();
    double TinhGiaTri(double x);
    DonThuc DaoHam();
    DonThuc Tong(DonThuc dt);
};

DonThuc::DonThuc(double hs, int sm) {
    a = hs;
    b = sm;
}

void DonThuc::Nhap() {
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap so mu b: ";
    cin >> b;
}

void DonThuc::Xuat() {
    if (a == 0) {
        cout << "0";
        return;
    }

    cout << a;

    if (b == 1) cout << "x";
    else if (b != 0) cout << "x^" << b;
    cout << endl;
}

double DonThuc::TinhGiaTri(double x) {
    return a * pow(x, b);
}

DonThuc DonThuc::DaoHam() {
    if (b == 0) return DonThuc(0, 0);
    return DonThuc(a * b, b - 1);
}

DonThuc DonThuc::Tong(DonThuc dt) {
    if (b != dt.b) {
        cout << "Khong cung bac, khong cong duoc!\n";
        return DonThuc(0, 0);
    }
    return DonThuc(a + dt.a, b);
}

int main() {
    DonThuc dt1, dt2;

    cout << "Nhap don thuc 1:\n";
    dt1.Nhap();

    cout << "Nhap don thuc 2:\n";
    dt2.Nhap();

    cout << "Don thuc 1: \n";
    dt1.Xuat();

    cout << "Don thuc 2: \n";
    dt2.Xuat();

    DonThuc tong = dt1.Tong(dt2);

    cout << "Tong hai don thuc: \n";
    tong.Xuat();

    double x;
    cout << "Nhap x de tinh gia tri: \n";
    cin >> x;

    cout << "Gia tri dt1 tai x = " << x << " la: "
        << dt1.TinhGiaTri(x) << endl;

    DonThuc dh1 = dt1.DaoHam();
    cout << "Dao ham dt1: \n";
    dh1.Xuat();

    DonThuc dh2 = dt2.DaoHam();
    cout << "Dao ham dt2: \n";
    dh2.Xuat();
    return 0;
}