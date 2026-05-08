#include "CDiem.h"
#include "CTamGiac.h"

int main() 
{
    CTamGiac t;

    t.Nhap();
    t.Xuat();

    cout << "Chu vi tam giac: " << t.ChuVi() << endl;
    cout << "Dien tich tam giac: " << t.DienTich() << endl;

    CDiem G = t.TrongTam();
    cout << "Toa do trong tam: ";
    G.Xuat();
    cout << endl;
    return 0;
}