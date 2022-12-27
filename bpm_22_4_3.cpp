#include <iostream>
#include <cmath>
#include <string>

int main()
{
    int count = 0;
    std::string first, second;
    std::cin >> first >> second;
    unsigned long long fsize, ssize;
    int n;
    fsize = first.size();
    ssize = second.size();
 //   if (fsize > ssize) {
 //       n = ssize;
//    }
 //   else {
 //       n = fsize;
 //   }

 /*  if (fsize - ssize < 0 or fsize - fsize > 0) {
        if (fsize - ssize < 0) {
            first += '0' * (ssize - fsize);
        }
        else {
            second += '0' * (fsize - ssize);
        }
    }*/
 //   std::cout << first << '\n' << second;
 //   int k = n;
//    while (first[fsize-k] == second[ssize-k] and k <= n)
 //   while(n) {
//        count += 1;
//        k -= 1;
 //       if (first[fsize - 1] == second[ssize - 1]) {
//            count += 1;
    while ((fsize - 1 > -1) && (ssize - 1 > -1) && (first[i - 1] == second[j - 1])) {
            fsize -= 1;
            ssize -= 1;
//        }
//        else {
//            break;
//        }
    }
    std::cout << fsize + ssize;
}