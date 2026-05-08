#include "DsPhanSo.h"

int main() {
    DSPhanSo ds;

    ds.Nhap();

    cout << "Danh sach: \n";
    ds.Xuat();

    cout << "Phan so lon nhat: \n";
    ds.Max().Xuat();

    cout << "Tong: \n";
    ds.Tong().Xuat();

    return 0;
}
