#pragma once
#include <iostream>
#include <math.h>
using namespace std;
#include "CDiem.h"

class CTamGiac
{
	private:
		CDiem A;
		CDiem B;
		CDiem C;
	public:
		void Nhap();
		void Xuat();
		float ChuVi();
		float DienTich();
		CDiem TrongTam();
};

