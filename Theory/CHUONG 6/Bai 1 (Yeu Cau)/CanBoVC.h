#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CBVC 
{
    protected:
        string MaCB;
        string HoTen;
        string GioiTinh;

    public:
        CBVC();
        virtual ~CBVC();

        virtual void Nhap();
        virtual void Xuat() const;

        virtual double TinhLuong() const = 0;
};

class GiangVien : public CBVC 
{
    private:
        int SoGioDay;
        int SoGioNghienCuu;
        double DonGia;

    public:
        GiangVien();

        void Nhap() override;
        void Xuat() const override;
        double TinhLuong() const override;
};

class NhanVienHanhChinh : public CBVC 
{
    private:
        int SoNgayLamViec;
        int SoGioLamThem;
        double TienCong1Ngay;
        double DonGiaTangCa;

    public:
        NhanVienHanhChinh();

        void Nhap() override;
        void Xuat() const override;
        double TinhLuong() const override;
};