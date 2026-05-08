#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;
class cArray {
private:
    int* a;
    int n;
public:
    cArray(int n) 
    {
        this->n = n;
        a = new int[n];

        srand(time(0));
        for (int i = 0; i < n; i++) {
            a[i] = rand() % 201 - 100;
        }
    }

    ~cArray() 
    {
        delete[] a;
    }

    void xuat()
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    int maxAm()
    {
        int Max = -1e6;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                if(Max < a[i]) Max = a[i];
            }
        }
        return Max;
    }

    int demX(int x)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x) count++;
        }
        return count;
    }

    bool giamDan()
    {
        for (int i = 0; i < n - 1; i++) 
        {
            if (a[i] < a[i + 1]) return false;
        }
        return true;
    }

    void sapXepTang()
    {
        for (int i = 1; i < n; i++)
        {
            int j = i - 1, x = a[i];
            while (j >= 0 && a[j] > x)
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = x;
        }
    }
};

int main() 
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cArray a(n);

    cout << "Mang ngau nhien:\n";
    a.xuat();

    cout << "So am lon nhat: " << a.maxAm() << endl;

    int x;
    cout << "Nhap x can dem: ";
    cin >> x;
    cout << "So lan xuat hien cua " << x << ": " << a.demX(x) << endl;

    if (a.giamDan())
        cout << "Mang giam dan\n";
    else
        cout << "Mang KHONG giam dan\n";

    a.sapXepTang();
    cout << "Mang sau khi sap xep tang:\n";
    a.xuat();

    return 0;
}