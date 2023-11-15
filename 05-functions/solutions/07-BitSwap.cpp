#include <iostream>

int swapBits(int n, int i, int j) {
    if (((n >> i) & 1) != ((n >> j) & 1)) {
        n ^= (1 << i) | (1 << j);
    }
    return n;
}

int main() {
    int n, i, j;
    std::cin >> n >> i >> j;
    
    std::cout << swapBits(n, i, j) << std::endl;

    return 0;
}
