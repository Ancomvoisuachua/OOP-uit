#pragma once
#include <iostream>
#include <math.h>
#include "CDiem.h"
using namespace std;

class CDuongTron
{
	private:
		CDiem O;
		float R;
	public:
		void Nhap();
		void Xuat();
		float ChuVi();
		float DienTich();
};

