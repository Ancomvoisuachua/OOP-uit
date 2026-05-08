#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Hocsinh {
    string HoTen;
    float DiemToan;
    float DiemVan;
};
typedef struct Hocsinh HOCSINH;

void Nhap(HOCSINH&);
float DiemTrungBinh(HOCSINH);
void Xuat(HOCSINH);

int main()
{
    HOCSINH hs;

    Nhap(hs);
    Xuat(hs);

    return 1;
}

void Nhap(HOCSINH& hs)
{
    cout << "Nhap ho ten hoc sinh: ";
    getline(cin, hs.HoTen);

    cout << "Nhap diem toan: ";
    cin >> hs.DiemToan;

    cout << "Nhap diem van: ";
    cin >> hs.DiemVan;
}

float DiemTrungBinh(HOCSINH hs)
{
    return (hs.DiemToan + hs.DiemVan) / 2;
}

void Xuat(HOCSINH hs)
{
    cout << "Ho ten: " << hs.HoTen << endl;
    cout << "Diem toan: " << hs.DiemToan << endl;
    cout << "Diem van: " << hs.DiemVan << endl;
    cout << "Diem TB: " << fixed << setprecision(2) << DiemTrungBinh(hs) << endl;
}



