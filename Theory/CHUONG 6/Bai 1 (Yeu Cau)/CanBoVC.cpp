#include "CanBoVC.h"

CBVC::CBVC() {}

CBVC::~CBVC() {}

void CBVC::Nhap() {
    cin.ignore();

    cout << "Nhap ma can bo: ";
    getline(cin, MaCB);

    cout << "Nhap ho ten: ";
    getline(cin, HoTen);

    cout << "Nhap gioi tinh: ";
    getline(cin, GioiTinh);
}

void CBVC::Xuat() const {
    cout << "Ma CB: " << MaCB << endl;
    cout << "Ho ten: " << HoTen << endl;
    cout << "Gioi tinh: " << GioiTinh << endl;
}

GiangVien::GiangVien() {
    SoGioDay = 0;
    SoGioNghienCuu = 0;
    DonGia = 0;
}

void GiangVien::Nhap() {
    CBVC::Nhap();

    cout << "Nhap so gio day: ";
    cin >> SoGioDay;

    cout << "Nhap so gio nghien cuu: ";
    cin >> SoGioNghienCuu;

    cout << "Nhap don gia: ";
    cin >> DonGia;
}

double GiangVien::TinhLuong() const {
    return (SoGioDay + SoGioNghienCuu) * DonGia;
}

void GiangVien::Xuat() const {
    cout << "Giang Vien \n";

    CBVC::Xuat();

    cout << "So gio day: " << SoGioDay << endl;
    cout << "So gio nghien cuu: " << SoGioNghienCuu << endl;
    cout << "Luong: " << TinhLuong() << endl;
}

NhanVienHanhChinh::NhanVienHanhChinh() {
    SoNgayLamViec = 0;
    SoGioLamThem = 0;
    TienCong1Ngay = 0;
    DonGiaTangCa = 0;
}

void NhanVienHanhChinh::Nhap() {
    CBVC::Nhap();

    cout << "Nhap so ngay lam viec: ";
    cin >> SoNgayLamViec;

    cout << "Nhap so gio lam them: ";
    cin >> SoGioLamThem;

    cout << "Nhap tien cong 1 ngay: ";
    cin >> TienCong1Ngay;

    cout << "Nhap don gia tang ca: ";
    cin >> DonGiaTangCa;
}

double NhanVienHanhChinh::TinhLuong() const {
    return SoNgayLamViec * TienCong1Ngay
        + SoGioLamThem * DonGiaTangCa;
}

void NhanVienHanhChinh::Xuat() const {
    cout << "Nhan Vien Hanh Chinh \n";

    CBVC::Xuat();

    cout << "So ngay lam viec: " << SoNgayLamViec << endl;
    cout << "So gio lam them: " << SoGioLamThem << endl;
    cout << "Luong: " << TinhLuong() << endl;
}