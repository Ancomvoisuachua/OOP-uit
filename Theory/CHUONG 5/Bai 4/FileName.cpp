#include "MaTran.h"

int main() {
    MaTran A, B;

    cout << "Nhap ma tran A:\n";
    cin >> A;

    cout << "Nhap ma tran B:\n";
    cin >> B;

    cout << "Ma tran A:\n" << A;
    cout << "Ma tran B:\n" << B;

    cout << "A + B:\n" << (A + B);
    cout << "A - B:\n" << (A - B);
    cout << "A * B:\n" << (A * B);

    return 0;
}