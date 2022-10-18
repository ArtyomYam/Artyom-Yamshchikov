#include <iostream>
#include <string>
#include <vector>

int main() {
	int t, p, flag, count;
	std::string s;
	std::cin >> t;
	while (t){
		count = 0;
		std::cin >> s;
		p = s.size();
//		std::vector<char> v(p);
		for (int i = 0; i < p; i += 1) {
			flag = 0;
			for (int d = i + 1; d < p; d += 1) {
				if (s[d] == "1") {
					flag = 0;
				}
			}
			if (flag == 1) {
				count += 1;
			}
		}
		std::cout << count;
	}
}
