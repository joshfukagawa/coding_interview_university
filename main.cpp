#include <iostream>
#include "Array.h"
#include <vector>
int main(int argc, const char * argv[]) {
    std::cout << std::boolalpha;

    Array<int> a;

    for (int i = 0; i < 11; i++) {
        a.push(i + 1);
    }

    std::cout << "Array: " << a.prepend(9000) << std::endl;
    std::cout << "Array: " << a << std::endl;
    return 0;
}

// g++ main.cpp -o main
//./main