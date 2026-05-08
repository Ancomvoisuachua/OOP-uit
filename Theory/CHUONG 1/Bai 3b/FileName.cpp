#include <iostream>
using namespace std;
struct Phanso {
    int tuso, mauso;
};
typedef struct Phanso PHANSO;
void nhap(PHANSO& );

int main()
{
    PHANSO ps1, ps2;
    nhap(ps1);
    nhap(ps2);
    if (ps1.tuso * ps2.mauso > ps2.tuso * ps1.mauso) cout << ps1.tuso << "/" << ps1.mauso;
    else if (ps1.tuso * ps2.mauso < ps2.tuso * ps1.mauso) cout << ps2.tuso << "/" << ps2.mauso;
    else cout << "2 phan so bang nhau";
    return 0;
}

void nhap(PHANSO& p) 
{
    cin >> p.tuso >> p.mauso;
}
