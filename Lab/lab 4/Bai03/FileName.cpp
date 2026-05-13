#include "CDaThuc.h"

int main()
{
    CDaThuc P, Q;

    cout << "Nhap da thuc P \n";
    cin >> P;
    cout << "Nhap da thuc Q \n";
    cin >> Q;

    cout << "DA THUC \n";
    cout << "P(x) = " << P << endl;
    cout << "Q(x) = " << Q << endl;

    CDaThuc Tong, Hieu, Tich, Thuong;
    Tong = P + Q;
    Hieu = P - Q;
    Tich = P * Q;
    Thuong = P / Q;

    cout << "TINH TOAN \n";
    cout << "P + Q = " << Tong << endl;
    cout << "P - Q = " << Hieu << endl;
    cout << "P * Q = " << Tich << endl;
    cout << "P / Q = " << Thuong << endl;

    CDaThuc P_copy = P;

    cout << "TOAN TU GAN \n";
    cout << "P += Q => " << (P += Q) << endl; P = P_copy;
    cout << "P -= Q => " << (P -= Q) << endl; P = P_copy;
    cout << "P *= Q => " << (P *= Q) << endl; P = P_copy;
    cout << "P /= Q => " << (P /= Q) << endl; P = P_copy;

    cout << "SO SANH \n";
    cout << "P == Q : " << (P == Q ? "Dung" : "Sai") << endl;
    cout << "P != Q : " << (P != Q ? "Dung" : "Sai") << endl;

    return 0;
}