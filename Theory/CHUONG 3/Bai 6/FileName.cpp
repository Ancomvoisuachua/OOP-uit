#include <iostream>
using namespace std;

class SoPhuc {
private:
    double thuc; 
    double ao;   

public:
    SoPhuc()
    {
        thuc = 0;
        ao = 0;
    }

    SoPhuc(double t, double a) 
    {
        thuc = t;
        ao = a;
    }

    void setThuc(double t) 
    {
        thuc = t;
    }

    void setAo(double a) 
    {
        ao = a;
    }

    double getThuc() 
    {
        return thuc;
    }

    double getAo()
    {
        return ao;
    }

    void nhap()
    {
        cout << "Nhap phan thuc: ";
        cin >> thuc;
        cout << "Nhap phan ao: ";
        cin >> ao;
    }

    void xuat() 
    {
        cout << thuc;
        if (ao >= 0)
            cout << " + " << ao << "i";
        else
            cout << " - " << -ao << "i";
    }

    SoPhuc cong(const SoPhuc& c)
    {
        return SoPhuc(thuc + c.thuc, ao + c.ao);
    }
};

int main() 
{
    SoPhuc A, B;

    cout << "Nhap so phuc A:\n";
    A.nhap();

    cout << "Nhap so phuc B:\n";
    B.nhap();

    cout << "So phuc A: ";
    A.xuat();
    cout << endl;

    cout << "So phuc B: ";
    B.xuat();
    cout << endl;

    SoPhuc C = A.cong(B);

    cout << "Tong A + B = ";
    C.xuat();
    cout << endl;

    return 0;
}