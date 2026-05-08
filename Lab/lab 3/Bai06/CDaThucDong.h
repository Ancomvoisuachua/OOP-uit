#pragma once
#include<iostream>
using namespace std;

class CDaThucDong
{
	private:
		int n;
		float* a;
	public:
		CDaThucDong();
		CDaThucDong(float*, int);
		CDaThucDong(const CDaThucDong&);
		~CDaThucDong();
		void Nhap();
		void Xuat();
};

