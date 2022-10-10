#include <iostream>
#include <string>

int main()
{
	int t, x;
	char miss, get, miss2;
	x = 0;
	std::cin >> t;
	for (int q = 0; q < t; q += 1) {
		std::cin >> miss >> get >> miss2;
		if (get == '+') {
			x += 1;
		}
		if (get == '-') {
			x -= 1;
		}
	}
	std::cout << x;
}
