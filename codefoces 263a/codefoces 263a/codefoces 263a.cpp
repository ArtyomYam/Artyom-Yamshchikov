#include <iostream>
#include <cmath>

int main() {
    int y, x, numb;
    for (int i = 0; i < 5; i += 1) {
        for (int j = 0; j < 5; j += 1) {
            std::cin >> numb;
            if (numb == 1) {
                y = i;
                x = j;
            }
        }
    }
    std::cout << y << ' ' << abs(3 - x) << ' ' << abs(3 - y);
    std::cout << abs(3 - x) + abs(3 - y);
}