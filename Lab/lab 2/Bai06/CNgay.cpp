#include "CNgay.h"

void CNgay::Nhap()
{
    cout << "Nhap ngay: ";
    cin >> ng;
    cout << "Nhap thang: ";
    cin >> th;
    cout << "Nhap nam: ";
    cin >> nm;
}

void CNgay::Xuat()
{
    cout << ng << "/" << th << "/" << nm << endl;
}

int CNgay::KiemTraNamNhuan()
{
    if ((nm % 4 == 0 && nm % 100 != 0) || (nm % 400 == 0))
        return 1;
    return 0;
}

int CNgay::STTTrongNam()
{
    int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    if (KiemTraNamNhuan())
        ngaythang[1] = 29;

    int stt = 0;
    for (int i = 1; i < th; i++)
        stt += ngaythang[i - 1];

    return stt + ng;
}

long CNgay::SoThuTu()
{
    long stt = 0;

    for (int i = 1; i < nm; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            stt += 366;
        else
            stt += 365;
    }

    return stt + STTTrongNam();
}

CNgay CNgay::TimNgay(int nam, int stt)
{
    int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    CNgay x;
    x.nm = nam;

    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
        ngaythang[1] = 29;
    x.th = 1;
    while (stt > ngaythang[x.th - 1])
    {
        stt -= ngaythang[x.th - 1];
        x.th++;
    }
    x.ng = stt;
    return x;
}

CNgay CNgay::TimNgay(long stt)
{
    int nam = 1;
    int songay = 365;
    while (stt - songay > 0)
    {
        stt = stt - songay;
        nam++;
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
            songay = 366;
        else
            songay = 365;
    }
    return TimNgay(nam, stt);
}

CNgay CNgay::TimNgayKeTiep()
{
    long stt = SoThuTu();
    return TimNgay(stt + 1);
}