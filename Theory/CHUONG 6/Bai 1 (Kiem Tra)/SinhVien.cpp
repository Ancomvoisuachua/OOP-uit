#include "SinhVien.h"

SinhVien::SinhVien() {
    TongTinChi = 0;
    DTB = 0;
}

SinhVien::~SinhVien() {};

void SinhVien::Nhap() {
    cout << "Nhap mssv: ";
    getline(cin, Mssv);

    cout << "Nhap ho ten: ";
    getline(cin, HoTen);

    cout << "Nhap dia chi: ";
    getline(cin, DiaChi);

    cout << "Nhap tong tin chi: ";
    cin >> TongTinChi;

    cout << "Nhap diem trung binh: ";
    cin >> DTB;
}

void SinhVien::Xuat() const {
    cout << "MSSV: " << Mssv << endl;
    cout << "Ho ten: " << HoTen << endl;
    cout << "Dia chi: " << DiaChi << endl;
    cout << "Tong tin chi: " << TongTinChi << endl;
    cout << "Diem Trung binh: " << DTB << endl;
}

SVCaoDang::SVCaoDang() {
    DiemThiTotNghiep = 0;
}

void SVCaoDang::Nhap() {
    SinhVien::Nhap();

    cout << "Nhap diem thi tot nghiep: ";
    cin >> DiemThiTotNghiep;
}

void SVCaoDang::Xuat() const {
    cout << "SINH VIEN CAO DANG \n";

    SinhVien::Xuat();

    cout << "Diem thi tot nghiep: "
        << DiemThiTotNghiep << endl;

    if (XetTotNghiep()) cout << "Sinh vien du dieu kien tot nghiep \n";
    else cout << "Sinh vien khong du dieu kien tot nghiep \n";
}

bool SVCaoDang::XetTotNghiep() const {
    return TongTinChi >= 120
        && DTB >= 5
        && DiemThiTotNghiep >= 5;
}

SVDaiHoc::SVDaiHoc() {
    DiemLuanVan = 0;
}

void SVDaiHoc::Nhap() {
    SinhVien::Nhap();

    cin.ignore();
    cout << "Nhap ten luan van: ";
    getline(cin, TenLuanVan);

    cout << "Nhap diem luan van: ";
    cin >> DiemLuanVan;
}

void SVDaiHoc::Xuat() const {
    cout << "SINH VIEN DAI HOC \n";

    SinhVien::Xuat();

    cout << "Ten luan van: "
        << TenLuanVan << endl;

    cout << "Diem luan van: "
        << DiemLuanVan << endl;

    if (XetTotNghiep()) cout << "Sinh vien du dieu kien tot nghiep \n";
    else cout << "Sinh vien khong du dieu kien tot nghiep \n";
}

bool SVDaiHoc::XetTotNghiep() const {
    return TongTinChi >= 170
        && DTB >= 5
        && DiemLuanVan >= 5;
}