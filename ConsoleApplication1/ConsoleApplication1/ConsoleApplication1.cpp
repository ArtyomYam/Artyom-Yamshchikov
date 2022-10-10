#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n, x, t;
	std::cin >> t;
	for (int q = 0; q < t; q += 1) {
		std::cin >> n >> x;
		std::vector<int>a(n);

		for (int i = 0; i < n; i += 1)
		{
			std::cin >> a[i];
		}

		sort(a.begin(), a.end());
		std::vector<int> b(250);

		for (int j = 0; j < n; j += 1)
		{
			b[a[j] - 1] = 1;
		}
		for (int k = 0; k < b.size(); k += 1)
		{
			if (b[k] == 0)
			{
				b[k] = 1;
				x -= 1;
			}
			if (x == 0)
			{
				break;
			}
		}
		for (int d = 0; d < b.size(); d += 1) {

			if (b[d] == 0)
			{
				std::cout << d << "\n";
				break;
			}
		}
	}
	
}