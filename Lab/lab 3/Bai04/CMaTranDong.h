#pragma once
#include <iostream>
using namespace std;

class CMaTranDong
{
	private:
		int m;
		int n;
		float** a;
	public:
		CMaTranDong();
		CMaTranDong(float**, int, int);
		CMaTranDong(const CMaTranDong&);
		~CMaTranDong();
		void Nhap();
		void Xuat();
};

