#include <iostream>
using namespace std;
struct Phanso{
    int tuso, mauso;
};
typedef struct Phanso PHANSO;

int gcd(int, int);
void nhap(PHANSO& p);

int main()
{
    PHANSO ps;
    nhap(ps);
    int ucln = gcd(ps.tuso, ps.mauso);
    int tu = ps.tuso / ucln, mau = ps.mauso / ucln;
    if (mau == 1) cout << tu;
    else cout << tu << "/" << mau;
    return 0;
}

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (b == 0) return a;
    return gcd(b, a % b);
}

void nhap(PHANSO& p)
{
    cin >> p.tuso >> p.mauso;
}
