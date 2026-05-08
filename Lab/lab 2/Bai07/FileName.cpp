#include "CNgay.h"
using namespace std;

int main()
{
    CNgay x;

    x.Nhap();
    cout << "Ngay hom nay: \n";
    x.Xuat();

    CNgay kq = x.TimNgayHomQua();
    cout << "Ngay hom qua: \n";
    kq.Xuat();

    return 0;
}