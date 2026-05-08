#pragma once
#include <iostream>
using namespace std;

class CMangTinh
{
	private:
		int n;
		float a[1000];
	public:
		CMangTinh();
		CMangTinh(float[], int);
		CMangTinh(const CMangTinh&);
		~CMangTinh();
		void Nhap();
		void Xuat();
};

