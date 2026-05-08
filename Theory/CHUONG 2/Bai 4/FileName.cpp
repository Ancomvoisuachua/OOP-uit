#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct HocSinh {
    string maHS;
    string hoTen;
    string gioiTinh;
    float toan, van, ly, hoa;
};
typedef struct HocSinh HOCSINH;
void nhap(HOCSINH&);
float tinhDTB(HOCSINH);
void xuat(HOCSINH);

int main() 
{
    HOCSINH hs;
    nhap(hs);
    xuat(hs);
    return 0;
}

void nhap(HOCSINH& hs)
{
    cout << "Nhap ma hoc sinh: ";
    getline(cin, hs.maHS);

    cout << "Nhap ho ten: ";
    getline(cin, hs.hoTen);

    cout << "Nhap gioi tinh: ";
    getline(cin, hs.gioiTinh);

    cout << "Nhap diem Toan: ";
    cin >> hs.toan;

    cout << "Nhap diem Van: ";
    cin >> hs.van;

    cout << "Nhap diem Ly: ";
    cin >> hs.ly;

    cout << "Nhap diem Hoa: ";
    cin >> hs.hoa;
}

float tinhDTB(HOCSINH hs)
{
    return (hs.toan + hs.van + hs.ly + hs.hoa) / 4;
}

void xuat(HOCSINH hs)
{
    cout << "Ma HS: " << hs.maHS << endl;
    cout << "Ho ten: " << hs.hoTen << endl;
    cout << "Gioi tinh: " << hs.gioiTinh << endl;
    cout << "Diem Toan: " << hs.toan << endl;
    cout << "Diem Van: " << hs.van << endl;
    cout << "Diem Ly: " << hs.ly << endl;
    cout << "Diem Hoa: " << hs.hoa << endl;
    cout << "Diem trung binh: " << fixed << setprecision(2) << tinhDTB(hs) << endl;
}

