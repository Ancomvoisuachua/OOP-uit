#include "NhanVien.h"

NhanVien::NhanVien() {
	Tuoi = 0;
	Luong = 0;
}

NhanVien::~NhanVien() {};

void NhanVien::Nhap() {
	cin.ignore();

	cout << "Nhap ma nhan vien: ";
	getline(cin, Ma);

	cout << "Nhap ho va ten: ";
	getline(cin, Hoten);

	cout << "Nhap tuoi: ";
	cin >> Tuoi;

	cin.ignore();
	cout << "Nhap so dien thoai: ";
	getline(cin, SDT);

	cout << "Nhap email: ";
	getline(cin, email);

	cout << "Nhap luong co ban: ";
	cin >> Luong;
}

void NhanVien::Xuat() const {
	cout << "Ma nhan vien: " << Ma << endl;
	cout << "Ho va ten: " << Hoten << endl;
	cout << "Tuoi: " << Tuoi << endl;
	cout << "So dien thoai: " << SDT << endl;
	cout << "Email: " << email << endl;
	cout << "Luong co ban: " << Luong << endl;
}

LapTrinhVien::LapTrinhVien() {
	SoGioLamThem = 0;
}

LapTrinhVien::~LapTrinhVien() {};

void LapTrinhVien::Nhap() {
	NhanVien::Nhap();

	cout << "Nhap so gio lam them: ";
	cin >> SoGioLamThem;

	cin.ignore();
}

double LapTrinhVien::TinhLuong() const {
	return Luong + SoGioLamThem * 200000;
}
 
void LapTrinhVien::Xuat() const {
	cout << "LAP TRINH VIEN \n";

	NhanVien::Xuat();
	cout << "Gio lam them: " << SoGioLamThem << endl;
	cout << "Luong cua Lap Trinh Vien: " << TinhLuong() << endl;
}

KiemChungVien::KiemChungVien() {
	SoLoiPhatHien = 0;
}

KiemChungVien::~KiemChungVien() {};

void KiemChungVien::Nhap() {
	NhanVien::Nhap();

	cout << "Nhap so loi phat hien: ";
	cin >> SoLoiPhatHien;

	cin.ignore();
}

double KiemChungVien::TinhLuong() const {
	return Luong + SoLoiPhatHien * 50000;
}

void KiemChungVien::Xuat() const {
	cout << "KIEM CHUNG VIEN \n";

	NhanVien::Xuat();
	cout << "So loi phat hien: " << SoLoiPhatHien << endl;
	cout << "Luong cua Kiem Chung Vien: " << TinhLuong() << endl;
}

