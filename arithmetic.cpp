#include <iostream>
int main() {
    int a = 0b11, b = 0b111011101011, c = 0b111010;
    std::cout << "Addition: " << a + b << std::endl;
    std::cout << "Subtraction: " << b - a << std::endl;
    std::cout << "Shift Right: " << (b >> 1) << std::endl;
    std::cout << "Shift Left: " << (b << 1) << std::endl;
    int flags = 0; flags |= (1 << 0); flags |= (1 << 2);
    std::cout << "Bitwise OR flags: " << flags << std::endl;
    return 0;
}