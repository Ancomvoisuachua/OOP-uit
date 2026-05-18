#include <iostream>
#include <vector>
#include <string>
using namespace std;

enum LoaiNhanVien
{
    VANPHONG = 1,
    SANXUAT,
    QUANLY
};

class NhanVien
{
    protected:
        string hoten;
        string ngaysinh;
        double luongCB;

    public:
        virtual void Nhap();
        virtual void Xuat();

        virtual double TinhLuong() = 0;

        virtual ~NhanVien() {}
};

class NhanVienVanPhong : public NhanVien
{
    private:
        int songaylam;
        double trocap;

    public:
        void Nhap();
        void Xuat();
        double TinhLuong();
};

class NhanVienSanXuat : public NhanVien
{
    private:
        int sosanpham;

    public:
        void Nhap();
        void Xuat();
        double TinhLuong();
};

class NhanVienQuanLy : public NhanVien
{
    private:
        double hesochucvu;
        double thuong;

    public:
        void Nhap();
        void Xuat();
        double TinhLuong();
};
