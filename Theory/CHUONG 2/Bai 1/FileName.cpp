#include <iostream>
using namespace std;
struct Phanso {
    int tuso, mauso;
};
typedef struct Phanso PHANSO;
int gcd(int, int);
void nhap(PHANSO&);
void tong(PHANSO, PHANSO);
void hieu(PHANSO, PHANSO);
void tich(PHANSO, PHANSO);
void thuong(PHANSO, PHANSO);

int main()
{
    PHANSO p1, p2;
    nhap(p1);
    nhap(p2);
    tong(p1, p2);
    hieu(p1, p2);
    tich(p1, p2);
    thuong(p1, p2);
    return 0;
}

int gcd(int a, int b)
{
    if (a == 0) return b;
    return gcd(b % a, a);
}

void nhap(PHANSO& p) 
{
    cin >> p.tuso >> p.mauso;
}

void tong(PHANSO p1, PHANSO p2) 
{
    int tu = (p1.tuso * p2.mauso) + (p2.tuso * p1.mauso);
    int mau = p1.mauso * p2.mauso;
    int ucln = gcd(tu, mau);
    cout << tu / ucln << "/" << mau / ucln << endl;
}

void hieu(PHANSO p1, PHANSO p2) 
{
    int tu = (p1.tuso * p2.mauso) - (p2.tuso * p1.mauso);
    int mau = p1.mauso * p2.mauso;
    int ucln = gcd(tu, mau);
    tu /= ucln;
    mau /= ucln;
    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }
    cout << tu << "/" << mau << endl;
}

void tich(PHANSO p1, PHANSO p2) 
{
    int tu = p1.tuso * p2.tuso;
    int mau = p1.mauso * p2.mauso;
    int ucln = gcd(tu, mau);
    cout << tu / ucln << "/" << mau / ucln << endl;
}

void thuong(PHANSO p1, PHANSO p2) 
{
    int tu = p1.tuso * p2.mauso;
    int mau = p1.mauso * p2.tuso;
    int ucln = gcd(tu, mau);
    cout << tu / ucln << "/" << mau / ucln << endl;
}
