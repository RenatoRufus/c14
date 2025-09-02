#include <iostream>
#include <limits> // For C++

int main() {
    std::cout << "Maximum value of int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Minimum value of int: " << std::numeric_limits<int>::min() << std::endl;
    //std::cout << "Number of bits in a char: " << CHAR_BIT << std::endl; // From <climits> or <limits.h>
    return 0;
}