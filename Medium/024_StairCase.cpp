//// @jollu

// All paths stari case

#include <algorithm>
#include <iostream>

int staircase(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    return staircase(n - 1) + staircase(n - 2) + staircase(n - 3);
}

int main() {
    std::cout << staircase(3);
}
