#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct NhanVien {
    char ma[9];
    char hoten[21];
    char phong[11];
    int luongCB;
    int thuong;
    int thucLanh;
};
typedef struct NhanVien NHANVIEN;
void Nhap(NHANVIEN&);
void Xuat(NHANVIEN);

int main() 
{
    int n;
    cin >> n;
    NhanVien ds[100];

    for (int i = 0; i < n; i++) {
        Nhap(ds[i]);
    }

    long long tong = 0;
    for (int i = 0; i < n; i++)
        tong += ds[i].thucLanh;
    cout << "Tong thuc lanh: " << tong << endl;

    int minLuong = ds[0].luongCB;
    for (int i = 1; i < n; i++) {
        if (ds[i].luongCB < minLuong)
            minLuong = ds[i].luongCB;
    }

    cout << "Nhan vien co luong co ban thap nhat: ";
    for (int i = 0; i < n; i++) {
        if (ds[i].luongCB == minLuong)
            Xuat(ds[i]);
    }

    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (ds[i].thuong >= 1200000)
            dem++;
    }

    cout << "So nhan vien thuong >= 1200000: " << dem << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((strcmp(ds[i].phong, ds[j].phong) > 0) ||
                (strcmp(ds[i].phong, ds[j].phong) == 0 && strcmp(ds[i].ma, ds[j].ma) < 0)) {
                NhanVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    cout << "Danh sach sau khi sap xep: ";
    for (int i = 0; i < n; i++)
        Xuat(ds[i]);

    return 0;
}

void Nhap(NhanVien& nv) 
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.getline(nv.ma, 9);
    cin.getline(nv.hoten, 21);
    cin.getline(nv.phong, 11);
    cin >> nv.luongCB;
    cin >> nv.thuong;
    nv.thucLanh = nv.luongCB + nv.thuong;
}

void Xuat(NhanVien nv) 
{
    cout << nv.ma << " | "
        << nv.hoten << " | "
        << nv.phong << " | "
        << nv.luongCB << " | "
        << nv.thuong << " | "
        << nv.thucLanh << endl;
}

