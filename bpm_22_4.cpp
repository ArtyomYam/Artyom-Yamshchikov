#include <iostream>
#include <cmath>

int main()
{
    double x = 0.1;
    while (x <= 1) {
        double count = 0.0;
        double eps = 0.1;
        int i = 0;
        while (eps >= 0.0001) {
            int res = 1;
            int coef = 2 * i;
            //factorial
            for (i = 1; i <= coef; i += 1) {
                res = res * coef;
            }
            eps = (pow(x, coef)) / res;
            count += eps;
//            std::cout << eps << '\n';
        }
        std::cout << x << " " << count << '\n';
        x += 0.05;
    }
}