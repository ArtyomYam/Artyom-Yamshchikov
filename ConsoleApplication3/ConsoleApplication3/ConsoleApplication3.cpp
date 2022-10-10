#include <iostream>
#include <numbers>
#define _USE_MATH_DEFINES	
#include <cmath>
#define M_PI

int main()
{
	int n, r, R, pi;
	pi = M_PI;
	std::cin >> n >> r;
	R = (pi * r) / (n - pi);
	std::cout << R;
}