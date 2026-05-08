#pragma once
#include<iostream>
using namespace std;

class CDaThucTinh
{
	private:
		int n;
		float a[100];
	public:
		CDaThucTinh();
		CDaThucTinh(float[], int);
		CDaThucTinh(const CDaThucTinh&);
		~CDaThucTinh();
		void Nhap();
		void Xuat();
};

