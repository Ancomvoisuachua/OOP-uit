#include "CSoPhuc.h"

int main()
{
    CSoPhuc s1, s2;

    cout << "Nhap so phuc s1" << endl;
    cin >> s1;
    cout << "Nhap so phuc s2" << endl;
    cin >> s2;
    cout << endl;

    cout << "So phuc sau khi nhap \n";
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << endl;

    CSoPhuc tong, hieu, tich, thuong;
    tong = s1 + s2;
    hieu = s1 - s2;
    tich = s1 * s2;
    thuong = s1 / s2;

    cout << "TINH TOAN \n";
    cout << "s1 + s2 = " << tong << endl;
    cout << "s1 - s2 = " << hieu << endl;
    cout << "s1 * s2 = " << tich << endl;
    cout << "s1 / s2 = " << thuong << endl;

    CSoPhuc s1_copy = s1;
    cout << "TOAN TU GAN \n";
    cout << "s1 += s2 => s1 = " << (s1 += s2) << endl; s1 = s1_copy;
    cout << "s1 -= s2 => s1 = " << (s1 -= s2) << endl; s1 = s1_copy;
    cout << "s1 *= s2 => s1 = " << (s1 *= s2) << endl; s1 = s1_copy;
    cout << "s1 /= s2 => s1 = " << (s1 /= s2) << endl; s1 = s1_copy;

    cout << "SO SANH \n";
    cout << "s1 == s2 : " << (s1 == s2 ? "Dung" : "Sai") << endl;
    cout << "s1 != s2 : " << (s1 != s2 ? "Dung" : "Sai") << endl;
    cout << "s1 < s2  : " << (s1 < s2 ? "Dung" : "Sai") << endl;
    cout << "s1 > s2  : " << (s1 > s2 ? "Dung" : "Sai") << endl;
    cout << "s1 <= s2 : " << (s1 <= s2 ? "Dung" : "Sai") << endl;
    cout << "s1 >= s2 : " << (s1 >= s2 ? "Dung" : "Sai") << endl;

    return 1;
}