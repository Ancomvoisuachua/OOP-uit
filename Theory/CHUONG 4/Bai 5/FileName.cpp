#include <iostream>
#include <string>
using namespace std;

class cBook {
    private:
	    string MaSach;
	    string TenSach;
	    int Nam;
	    int TongTrang;
    public:
        cBook(string ma = "", string ten = "", int nam = 0, int trang = 0);

        void Nhap();
        void Xuat();
        int getNamXB();
        void setTenSach(string ten);
};

cBook::cBook(string ma, string ten, int nam, int trang) {
    MaSach = ma;
    TenSach = ten;
    Nam = nam;
    TongTrang = trang;
}

void cBook::Nhap() {
    cout << "Nhap ma sach: \n";
    cin.ignore();
    getline(cin, MaSach);
    cout << "Nhap ten sach: \n";
    getline(cin, TenSach);
    cout << "Nhap nam xuat ban: \n";
    cin >> Nam;
    cout << "Tong so trang: \n";
    cin >> TongTrang;
}

void cBook::Xuat() {
    cout << "Ma: " << MaSach
        << " | Ten: " << TenSach
        << " | Nam: " << Nam
        << " | Trang: " << TongTrang << endl;
}

int cBook::getNamXB() {
    return Nam;
}

void cBook::setTenSach(string ten) {
    TenSach = ten;
}

class cListBook {
    private:
        cBook* a;
        int n;

    public:
        cListBook(int size = 0);
        ~cListBook();

        void NhapDS();
        void XuatDS();
        cBook SachMoiNhat();
};

cListBook::cListBook(int size) {
    n = size;
    if (n > 0) a = new cBook[n];
    else  a = nullptr;
}

cListBook::~cListBook() {
    delete[] a;
}

void cListBook::NhapDS() {
    cout << "Nhap so luong sach n = ";
    cin >> n;

    delete[] a;
    a = new cBook[n];
    for (int i = 0; i < n; i++) 
        a[i].Nhap();
}

void cListBook::XuatDS() {
    cout << "Danh sach sach:\n";
    for (int i = 0; i < n; i++) {
        a[i].Xuat();
    }
}

cBook cListBook::SachMoiNhat() {
    cBook maxBook = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i].getNamXB() > maxBook.getNamXB()) {
            maxBook = a[i];
        }
    }
    return maxBook;
}

int main() {
    cListBook ds;

    ds.NhapDS();
    ds.XuatDS();

    cBook moiNhat = ds.SachMoiNhat();
    cout << "Sach moi nhat:\n";
    moiNhat.Xuat();

    return 0;
}