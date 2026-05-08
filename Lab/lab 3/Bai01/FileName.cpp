#include <iostream>
using namespace std;
#include "CMangTinh.h"

int main()
{
	CMangTinh x1;
	float a[5] = { 1, 2, 3, 4, 5 };
	CMangTinh x2(a, 5);
	CMangTinh x3(x2);
	return 1;
}