#include <iostream>
#include <vector>
using namespace std;
struct PhanSo {
    long long tu, mau;
};
long long gcd(long long, long long);
void rutGon(PhanSo&);
void nhap(PhanSo&);
PhanSo cong(PhanSo, PhanSo);
PhanSo tongDay(vector<PhanSo>);
PhanSo lonNhat(vector<PhanSo>);

int main() 
{
    int n;
    cin >> n;
    vector<PhanSo> ds(n);

    for (int i = 0; i < n; i++) {
        nhap(ds[i]);
        rutGon(ds[i]);
    }
    PhanSo tong = tongDay(ds);
    PhanSo maxPS = lonNhat(ds);
    cout << "Tong = " << tong.tu << "/" << tong.mau << endl;
    cout << "Phan so lon nhat = " << maxPS.tu << "/" << maxPS.mau;

    return 0;
}

long long gcd(long long a, long long b) 
{
    if (b == 0) return abs(a);
    return gcd(b, a % b);
}

void rutGon(PhanSo& p) 
{
    long long g = gcd(p.tu, p.mau);
    p.tu /= g;
    p.mau /= g;
    if (p.mau < 0) {
        p.tu = -p.tu;
        p.mau = -p.mau;
    }
}

void nhap(PhanSo& p) 
{
    cin >> p.tu >> p.mau;
}

PhanSo cong(PhanSo a, PhanSo b) 
{
    PhanSo kq;
    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    rutGon(kq);
    return kq;
}

PhanSo tongDay(vector<PhanSo> a) 
{
    PhanSo sum = { 0, 1 };
    for (auto p : a) {
        sum = cong(sum, p);
    }
    return sum;
}

PhanSo lonNhat(vector<PhanSo> a) 
{
    PhanSo maxPS = a[0];
    for (int i = 1; i < a.size(); i++) {
        if (a[i].tu * maxPS.mau > maxPS.tu * a[i].mau)
            maxPS = a[i];
    }
    return maxPS;
}