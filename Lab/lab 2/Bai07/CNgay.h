#pragma once
#include <iostream>
using namespace std;

class CNgay
{
private:
    int ng, th, nm;

public:
    void Nhap();
    void Xuat();

    int KiemTraNamNhuan();
    int STTTrongNam();
    long SoThuTu();

    CNgay TimNgay(long stt);
    CNgay TimNgay(int nam, int stt);
    CNgay TimNgayHomQua();
};