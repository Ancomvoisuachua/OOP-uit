#pragma once
#include <iostream>
using namespace std;

class CMangDong
{
	private:
		int n;
		float *a;
	public:
		CMangDong();
		CMangDong(float*, int);
		CMangDong(const CMangDong&);
		~CMangDong();
		void Nhap();
		void Xuat();
};

