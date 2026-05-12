#pragma once
#include <iostream>
#include <string>
using namespace std;

class SinhVien
{
	protected:
		string Mssv;
		string HoTen;
		string DiaChi;
		int TongTinChi;
		double DTB;
	public:
		SinhVien();
		virtual ~SinhVien();

		virtual void Nhap();
		virtual void Xuat() const;

		virtual bool XetTotNghiep() const = 0;
};

class SVCaoDang : public SinhVien
{
	private:
		double DiemThiTotNghiep;
	public:
		SVCaoDang();

		void Nhap() override;
		void Xuat() const override;

		bool XetTotNghiep() const override;
};

class SVDaiHoc : public SinhVien
{
	private: 
		string TenLuanVan;
		double DiemLuanVan;
	public:
		SVDaiHoc();

		void Nhap() override;
		void Xuat() const override;

		bool XetTotNghiep() const override;
};