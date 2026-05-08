#include <iostream>
using namespace std;
#include "CMangDong.h"

int main()
{
	CMangDong x1;
	float a[5] = { 1, 2, 3, 4, 5 };
	CMangDong x2(a, 5);
	CMangDong x3(x2);
	return 1;
}