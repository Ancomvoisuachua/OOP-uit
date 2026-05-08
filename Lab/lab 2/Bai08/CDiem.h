#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class CDiem
{
	private:
		float x;
		float y;
	public:
		void Nhap();
		void Xuat();
		float KhoangCach(CDiem d);
		float GetX() { return x; }
		float GetY() { return y; }
		void SetXY(float _x, float _y) { x = _x; y = _y; }
};
