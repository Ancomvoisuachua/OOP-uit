#include "CanBoVC.h"

int main() {
    vector<CBVC*> ds;

    int n;
    cout << "Nhap so luong can bo vien chuc: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int loai;

        cout << "Chon loai CBVC : \n";
        cout << "1. Giang vien\n";
        cout << "2. Nhan vien hanh chinh\n";
        cout << "Nhap lua chon: ";
        cin >> loai;

        CBVC* p = nullptr;

        if (loai == 1) 
            p = new GiangVien();
        else if (loai == 2) 
            p = new NhanVienHanhChinh();

        if (p != nullptr) {
            p->Nhap();
            ds.push_back(p);
        }
    }

    cout << "DANH SACH CBVC \n";

    for (int i = 0; i < ds.size(); i++) {
        ds[i]->Xuat();
        cout << endl;
    }

    for (int i = 0; i < ds.size(); i++) 
        delete ds[i];

    return 0;
}
