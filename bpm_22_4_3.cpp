#include <iostream>
#include <cmath>

int main()
{
    int count = 0;
    std::string first, second;
    std::cin >> first >> second;
    int fsize, ssize, n;
    fsize = first.size();
    ssize = second.size();
    if (fsize > ssize) {
        n = fsize;
    }
    else {
        n = ssize;
    }
    if (fsize - ssize < 0 or fsize - fsize > 0) {
        if (fsize - ssize < 0) {
            first += '0' * (ssize - fsize);
        }
        else {
            second += '0' * (fsize - ssize);
        }
    }
    while (first[n] == second[n]){
        count += 1;
        n -= 1;
    }
    std::cout << count;
}