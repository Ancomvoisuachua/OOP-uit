#include "NhanVien.h"

int main()
{
    vector<NhanVien*> ds;

    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    cout << "NHAN VIEN \n";
    for (int i = 0; i < n; i++)
    {
        cout << "1. Van phong\n";
        cout << "2. San xuat\n";
        cout << "3. Quan ly\n";

        int loai;
        cout << "Chon loai nhan vien: ";
        cin >> loai;

        NhanVien* nv = NULL;

        switch ((LoaiNhanVien)loai)
        {
            case VANPHONG:
                nv = new NhanVienVanPhong;
                break;

            case SANXUAT:
                nv = new NhanVienSanXuat;
                break;

            case QUANLY:
                nv = new NhanVienQuanLy;
                break;

            default:
                cout << "Loai khong hop le!\n";
                i--;
                continue;
        }

        nv->Nhap();
        ds.push_back(nv);
    }

    cout << "DANH SACH NHAN VIEN \n";

    double tongLuong = 0;

    for (NhanVien* nv : ds)
    {
        nv->Xuat();
        cout << endl;
        tongLuong += nv->TinhLuong();
    }

    cout << "Tong luong cong ty: " << tongLuong << endl;

    for (NhanVien* nv : ds)
    {
        delete nv;
    }

    return 0;
}