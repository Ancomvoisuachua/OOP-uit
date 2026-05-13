#include "CTime.h"

int main()
{
    CTime t;
    cin >> t;

    cout << "Thoi gian vua nhap: " << t << endl;

    CTime a = t + 500;
    cout << "Sau khi cong 500 giay: " << a << endl;

    CTime b = t - 200;
    cout << "Sau khi tru 200 giay: " << b << endl;

    cout << "t++: " << t++ << endl;
    cout << "Sau t++: " << t << endl;

    cout << "++t: " << ++t << endl;

    cout << "t--: " << t-- << endl;
    cout << "Sau t--: " << t << endl;

    cout << "--t: " << --t << endl;

    return 0;
}