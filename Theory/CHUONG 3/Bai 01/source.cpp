#include <iostream>
#include <string>
using namespace std;

class HocSinh {
private:
    string HoTen;
    float DiemToan;
    float DiemVan;

public:
    void Nhap()
    {
        cout << "Nhap ho va ten: ";
        getline(cin, HoTen);

        cout << "Nhap diem toan: ";
        cin >> DiemToan;

        cout << "Nhap diem van: ";
        cin >> DiemVan;

        cin.ignore();
    }

    float DiemTrungBinh()
    {
        return (DiemToan + DiemVan) / 2;
    }

    void XepLoai()
    {
        float diem = DiemTrungBinh();

        if (diem >= 8.5 && diem <= 10) cout << "Gioi";
        else if (diem >= 7 && diem <= 8.4) cout << "Kha";
        else if (diem >= 5.5 && diem <= 6.9) cout << "Trung Binh";
        else if (diem >= 4 && diem <= 5.4) cout << "Yeu";
        else cout << "Kem";
    }

    void Xuat()
    {
        cout << "Ho ten: " << HoTen << endl;
        cout << "Diem toan: " << DiemToan << endl;
        cout << "Diem van: " << DiemVan << endl;
        cout << "Diem trung binh: " << DiemTrungBinh() << endl;
        cout << "Xep loai: ";
        XepLoai();
    }
};

int main()
{
    HocSinh hs;
    hs.Nhap();
    hs.Xuat();
    return 0;
}