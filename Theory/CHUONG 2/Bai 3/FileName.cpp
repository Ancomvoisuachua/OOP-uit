#include <iostream>
using namespace std;

void nhap(int a[][100], int& n, int& m);
void xuat(int a[][100], int n, int m);
void tong(int a[][100], int b[][100], int c[][100], int n1, int m1, int n2, int m2);
void hieu(int a[][100], int b[][100], int c[][100], int n1, int m1, int n2, int m2);
void tich(int a[][100], int b[][100], int c[][100], int n1, int m1, int n2, int m2);

int main() {
    int a[100][100], b[100][100], c[100][100];
    int n1, m1, n2, m2;

    nhap(a, n1, m1);
    nhap(b, n2, m2);
    cout << endl;

    tong(a, b, c, n1, m1, n2, m2);
    cout << endl;
    hieu(a, b, c, n1, m1, n2, m2);
    cout << endl;
    tich(a, b, c, n1, m1, n2, m2);
    return 0;
}

void nhap(int a[][100], int& n, int& m) 
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}

void tong(int a[][100], int b[][100], int c[][100], int n1, int m1, int n2, int m2)
{
    if (n1 != n2 || m1 != m2) {
        cout << "khong hop le" << endl;
        return;
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}

void hieu(int a[][100], int b[][100], int c[][100], int n1, int m1, int n2, int m2)
{
    if (n1 != n2 || m1 != m2) {
        cout << "khong hop le" << endl;
        return;
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++)
            c[i][j] = a[i][j] - b[i][j];
    }
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}

void tich(int a[][100], int b[][100], int c[][100], int n1, int m1, int n2, int m2)
{
    if (m1 != n2) {
        cout << "khong hop le" << endl;
        return;
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}
