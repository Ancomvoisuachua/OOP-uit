#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
	protected:
		string Ma;
		string Hoten;
		int Tuoi;
		string SDT;
		string email;
		double Luong;
	public:
		NhanVien();
		virtual ~NhanVien();

		virtual void Nhap();
		virtual void Xuat() const;

		virtual double TinhLuong() const = 0;
};

class LapTrinhVien : public NhanVien
{
	private:
		int SoGioLamThem;
	public:
		LapTrinhVien();
		virtual ~LapTrinhVien();

		void Nhap() override;
		void Xuat() const override;

		double TinhLuong() const override;
};

class KiemChungVien : public NhanVien
{
	private:
		int SoLoiPhatHien;
	public:
		KiemChungVien();
		virtual ~KiemChungVien();

		void Nhap() override;
		void Xuat() const override;

		double TinhLuong() const override;
};