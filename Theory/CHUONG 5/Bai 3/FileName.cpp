#include "DaThuc.h"

int main() {
    DaThuc P, Q;

    cout << "Nhap da thuc P:\n";
    cin >> P;

    cout << "Nhap da thuc Q:\n";
    cin >> Q;

    cout << "P(x) = " << P << endl;
    cout << "Q(x) = " << Q << endl;

    DaThuc R = P + Q;
    cout << "P + Q = " << R << endl;

    double x;
    cout << "Nhap x: ";
    cin >> x;

    cout << "P(" << x << ") = " << P.tinhGiaTri(x) << endl;
    cout << "Q(" << x << ") = " << Q.tinhGiaTri(x) << endl;

    return 0;
}