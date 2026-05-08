#include <iostream>
using namespace std;
struct date {
    int day, month, year;
};
typedef struct date DATE;
bool NamNhuan(int);
void Nhap(DATE&);
int Day(DATE&);

int main()
{
    DATE d;
    Nhap(d);
    int songay = Day(d);
    if (d.day < songay) d.day++;
    else {
        d.day = 1;
        if (d.month == 12) {
            d.month = 1;
            d.year++;
        }
        else d.month++;
    }
    cout << d.day << "/" << d.month << "/" << d.year;
    return 0;
}

bool NamNhuan(int year) 
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

void Nhap(DATE& d) 
{
    cin >> d.day >> d.month >> d.year;
}

int Day(DATE& d) 
{
    switch (d.month) {
    case 1: case 3: case 5: case 7:
    case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if (NamNhuan(d.year)) return 29;
        else return 28;
    }
    return 0;
}