#include <iostream>
#include <ctime>
using namespace std;

class cArray {
private:
    int* a;
    int n;

public:
    cArray(int size = 0);
    ~cArray();

    void Nhap();
    void Xuat();
    void TaoNgauNhien();
    int DemX(int x);
    bool TangDan();
    int LeNhoNhat();
    void SapXepTang();
};

cArray::cArray(int size) {
    n = size;
    if (n > 0) a = new int[n];
    else a = nullptr;
}

cArray::~cArray() {
    delete[] a;
}

void cArray::Nhap() {
    cin >> n;

    delete[] a;
    a = new int[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];
}

void cArray::Xuat() {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void cArray::TaoNgauNhien() {
    cout << "Nhap n = ";
    cin >> n;

    delete[] a;
    a = new int[n];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }
}

int cArray::DemX(int x) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) dem++;
    }
    return dem;
}

bool cArray::TangDan() {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) return false;
    }
    return true;
}

int cArray::LeNhoNhat() {
    int minLe = INT_MAX;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (a[i] < minLe) minLe = a[i];
            found = true;
        }
    }

    if (!found) return -1;
    return minLe;
}

void cArray::SapXepTang() {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int x = a[i];
        while (j >= 0 && a[j] > x) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}

int main() {
    cArray arr;

    arr.Nhap();
    arr.Xuat();

    int x;
    cin >> x;
    cout << "So lan xuat hien cua "<< x << " la : " << arr.DemX(x) << endl;

    if (arr.TangDan()) cout << "Tang dan\n";
    else cout << "Khong tang dan\n";

    int kq = arr.LeNhoNhat();
    if (kq == -1) cout << "Khong co so le\n";
    else cout << "Le nho nhat: " << kq << endl;

    arr.SapXepTang();
    arr.Xuat();

    return 0;
}