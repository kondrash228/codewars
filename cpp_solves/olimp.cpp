#include <iostream>


int main() {
    long long a,b,t;


    std::cin >> a >> b >> t;
    std::cout << "\n";

    // long long temp = (t % b) * a;
    // long long temp2 = (t % a) * b;
    // long long min_num = std::min(temp2, temp);
    
    // std::cout << temp << " " << temp2 << std::endl;
    long long min1 = 0;
    long long min2 = 0;

    for (long long i = 0; i < t + a; i += a) {


            if (i > t) {
                min1=i;
                break;
            }
    }


    for (long long i = 0; i < t + b; i += b) {

            if (i > t) {
                min2=i;
                break;
            }

    }

    // std::cout << min1 << "\t" << min2 << std::endl;

    if (min1 == 0 || min2 == 0) {
        std::cout << 0 << std::endl;

    } else {
        long long tmp1 = min1-t;
    long long tmp2 = min2-t;

    long long min_n = std::min(tmp1, tmp2);
    std::cout << min_n << std::endl;
    }

}