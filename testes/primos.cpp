#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void generatePrimes(std::vector<int>& primes) {
    primes.clear();
    for (int i = 2; i <= 1000000; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
}

int main() {
    std::vector<int> primes;
    generatePrimes(primes);

    std::cout << "Prime numbers from 1 to one million:" << std::endl;
    for (const auto& prime : primes) {
        std::cout << prime << "\n";
    }
    std::cout << std::endl;

    return 0;
}
