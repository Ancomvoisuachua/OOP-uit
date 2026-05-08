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
void NhapHS(HOCSINH[], int&);
float TinhDTB(HOCSINH);
void DiemTrungBinh(HOCSINH[], int);
void Xuat(HOCSINH);

int main()
{
    HOCSINH hs[100];
    int n;

    NhapHS(hs, n);
    DiemTrungBinh(hs, n);

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
    cin.ignore();
}

void NhapHS(HOCSINH hs[], int& n)
{
    cout << "Nhap so luong hoc sinh: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
        Nhap(hs[i]);
}

float TinhDTB(HOCSINH hs)
{
    return (hs.DiemToan + hs.DiemVan) / 2;
}

void DiemTrungBinh(HOCSINH hs[], int n)
{
    int Max = 0, Min = 0;

    for (int i = 1; i < n; i++)
    {
        if (TinhDTB(hs[i]) > TinhDTB(hs[Max])) {
            Max = i;
        }
        if (TinhDTB(hs[i]) < TinhDTB(hs[Min])) {
            Min = i;
        }
    }

    cout << "Hoc sinh co diem Tb cao nhat: " << endl;
    Xuat(hs[Max]);

    cout << "Hoc sinh co diem Tb thap nhat: " << endl;
    Xuat(hs[Min]);
}

void Xuat(HOCSINH hs)
{
    cout << "Ho ten: " << hs.HoTen << endl;
    cout << "Diem toan: " << hs.DiemToan << endl;
    cout << "Diem van: " << hs.DiemVan << endl;
    cout << "Diem TB: " << fixed << setprecision(2) << TinhDTB(hs) << endl;
}
