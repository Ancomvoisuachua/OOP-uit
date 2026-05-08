#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class cHocSinh {
private:
	string HoTen;
	string GioiTinh;
	int NamSinh;
	float DiemTrungBinh;
public:
	void nhap()
	{
		cout << "Nhap Ho va Ten: \n";
		getline(cin, HoTen);
		
		cout << "Nhap gioi tinh: \n";
		getline(cin, GioiTinh);

		cout << "Nhap nam sinh: \n";
		cin >> NamSinh;

		cout << "Nhap diem trung binh: \n";
		cin >> DiemTrungBinh;

		cin.ignore();
	}
	
	void DTB(cHocSinh& h)
	{
		if (DiemTrungBinh > h.DiemTrungBinh)
			cout << "Hoc sinh " << HoTen << " co DTB cao hon\n";
		else if (DiemTrungBinh < h.DiemTrungBinh)
			cout << "Hoc sinh " << h.HoTen << " co DTB cao hon\n";
		else
			cout << "Hai hoc sinh co DTB bang nhau\n";
	}

	void Tuoi(cHocSinh& h)
	{
		if (NamSinh < h.NamSinh)
			cout << "Hoc sinh " << HoTen << " lon tuoi hon\n";
		else if (NamSinh > h.NamSinh)
			cout << "Hoc sinh " << h.HoTen << " lon tuoi hon\n";
		else
			cout << "Hai hoc sinh bang tuoi\n";
	}
};

int main()
{
	cHocSinh A, B;
	cout << "Nhap hoc sinh A: " << '\n';
	A.nhap();

	cout << "Nhap hoc sinh B: " << '\n';
	B.nhap();

	A.DTB(B);
	A.Tuoi(B);

	return 0;
}