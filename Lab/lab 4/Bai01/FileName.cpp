#include<iostream>
#include "CHonSo.h"
#include "CPhanSo.h"

using namespace std;

int main()
{
	CHonSo x1, x2;
	
	cout << "Nhap hon so thu nhat \n";
	cin >> x1;
	cout << "Nhap hon so thu hai \n";
	cin >> x2;

	cout << "Hon so thu nhat la: \n";
	cout << x1;
	cout << "Hon so thu hai la: \n";
	cout << x2;
	cout << endl;

	CHonSo tong = x1 + x2;
	cout << "Tong 2 hon so la: " << tong << endl;
	CHonSo hieu = x1 - x2;
	cout << "Hieu 2 hon so la: " << hieu << endl;
	CHonSo tich = x1 * x2;
	cout << "Tich 2 hon so la: " << tich << endl;
	CHonSo thuong = x1 / x2;
	cout << "Thuong 2 hon so la: " << thuong << endl;

	if (x1 == x2) cout << "x1 = x2";
	else if (x1 > x2) cout << "x1 > x2";
	else cout << "x1 < x2";
	cout << endl;

	cout << "tang tien to x1: " << ++x1 << endl;
	cout << "tang hau to x1: " << x1++ << endl;
	cout << "x1 sau khi tang: " << x1 << endl;

	cout << "giam tien to x2: " << --x2 << endl;
	cout << "giam hau to x2: " << x2-- << endl;
	cout << "x2 sau khi giam: " << x2 << endl;
	return 1;
}