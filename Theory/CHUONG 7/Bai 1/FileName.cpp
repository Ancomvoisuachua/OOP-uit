#include "NhanVien.h"

void NhanVien::Nhap()
{
    cin.ignore();

    cout << "Nhap ho ten: ";
    getline(cin, hoten);

    cout << "Nhap ngay sinh: ";
    getline(cin, ngaysinh);

    cout << "Nhap luong co ban: ";
    cin >> luongCB;
}

void NhanVien::Xuat()
{
    cout << "Ho ten: " << hoten << endl;
    cout << "Ngay sinh: " << ngaysinh << endl;
    cout << "Luong co ban: " << luongCB << endl;
}

void NhanVienVanPhong::Nhap()
{
    NhanVien::Nhap();

    cout << "Nhap so ngay lam: ";
    cin >> songaylam;

    cout << "Nhap tro cap: ";
    cin >> trocap;
}

void NhanVienVanPhong::Xuat()
{
    NhanVien::Xuat();

    cout << "So ngay lam: " << songaylam << endl;
    cout << "Tro cap: " << trocap << endl;

    cout << "Luong: " << TinhLuong() << endl;
}

double NhanVienVanPhong::TinhLuong()
{
    return luongCB + songaylam * 200000 + trocap;
}

void NhanVienSanXuat::Nhap()
{
    NhanVien::Nhap();

    cout << "Nhap so san pham: ";
    cin >> sosanpham;
}

void NhanVienSanXuat::Xuat()
{
    NhanVien::Xuat();

    cout << "So san pham: " << sosanpham << endl;

    cout << "Luong: " << TinhLuong() << endl;
}

double NhanVienSanXuat::TinhLuong()
{
    return luongCB + sosanpham * 2000;
}

void NhanVienQuanLy::Nhap()
{
    NhanVien::Nhap();

    cout << "Nhap he so chuc vu: ";
    cin >> hesochucvu;

    cout << "Nhap thuong: ";
    cin >> thuong;
}

void NhanVienQuanLy::Xuat()
{
    NhanVien::Xuat();

    cout << "He so chuc vu: " << hesochucvu << endl;
    cout << "Thuong: " << thuong << endl;

    cout << "Luong: " << TinhLuong() << endl;
}

double NhanVienQuanLy::TinhLuong()
{
    return luongCB * hesochucvu + thuong;
}