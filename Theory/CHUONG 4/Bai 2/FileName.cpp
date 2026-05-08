#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

class PhanSo {
    private:
        int Tu;
        int Mau;
    public:
        PhanSo(int t = 0, int m = 1);
        int getTu() { return Tu; }
        void Nhap();
        void Xuat();
        void RutGon();
        double GiaTri();
};

PhanSo::PhanSo(int t, int m) {
    Tu = t;
    Mau = (m == 0 ? 1 : m);
}

void PhanSo::Nhap() {
    cout << "Nhap tu: ";
    cin >> Tu;
    cout << "Nhap mau: ";
    cin >> Mau;
}

void PhanSo::Xuat() {
    cout << Tu << "/" << Mau << " ";
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void PhanSo::RutGon() {
    int g = gcd(abs(Tu), abs(Mau));
    Tu /= g;
    Mau /= g;

    if (Mau < 0) {
        Tu = -Tu;
        Mau = -Mau;
    }
}

double PhanSo::GiaTri() {
    return (double)Tu / Mau;
}

class arrPhanSo {
private:
    PhanSo* a;
    int n;
public:
    arrPhanSo(int size = 0);
    ~arrPhanSo();
    void NhapDS();
    void XuatDS();
    void TaoNgauNhien();
    int DemTuNguyenTo();
    bool TangDan();
    PhanSo PSLonNhat();
    void SapXepTang();
};

arrPhanSo::arrPhanSo(int size) {
    n = size;
    if (n > 0) a = new PhanSo[n];
    else a = nullptr;
}

arrPhanSo::~arrPhanSo() {
    delete[] a;
}

void arrPhanSo::NhapDS() {
    cout << "Nhap n: \n";
    cin >> n;

    delete[] a;
    a = new PhanSo[n];

    for (int i = 0; i < n; i++) {
        a[i].Nhap();
        a[i].RutGon();
    }
}

void arrPhanSo::XuatDS() {
    for (int i = 0; i < n; i++)
        a[i].Xuat();
}

void arrPhanSo::TaoNgauNhien() {
    cout << "Nhap n = ";
    cin >> n;

    delete[] a;
    a = new PhanSo[n];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }
}

PhanSo arrPhanSo::PSLonNhat() {
    PhanSo Max = a[0]; 
    for (int i = 0; i < n; i++) {
        if (a[i].GiaTri() > Max.GiaTri()) {
            Max = a[i];
        }
    }
    return Max;
}

bool LaSNT(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int arrPhanSo::DemTuNguyenTo() {
    int dem = 0;
    
    for (int i = 0; i < n; i++) {
        if (LaSNT(a[i].getTu())) dem++;
    }
    return dem;
}

void arrPhanSo::SapXepTang() {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        PhanSo x = a[i];
        while (j >= 0 && a[j].GiaTri() > x.GiaTri()) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}

int main() {
    arrPhanSo arr;

    arr.NhapDS();
    arr.XuatDS();
    cout << endl;

    PhanSo PSLonNhat = arr.PSLonNhat();
    cout << "Phan so lon nhat: ";
    PSLonNhat.Xuat();
    cout << endl;

    cout << "So phan so co tu la so nguyen to: "
        << arr.DemTuNguyenTo() << endl;

    arr.SapXepTang();
    cout << "Sau khi sap xep:\n";
    arr.XuatDS();

    return 0;
}