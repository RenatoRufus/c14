#include <iostream>
#include <vector>

using namespace std;

void crivoEratostenes(int n) {
    vector<bool> isPrimo(n+1, true);
    isPrimo[0] = isPrimo[1] = false; // 0 e 1 não são primos

    for (int p=2; p*p<=n; p++) {
        if (isPrimo[p]) {
            for (int i=p*p; i<=n; i+=p) {
                isPrimo[i] = false;
            }
        }
    }

    // Imprimindo os números primos
    for (int i=2; i<=n; i++) {
        if (isPrimo[i]) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cout << "Digite o número máximo: ";
    cin >> n;

    crivoEratostenes(n);

    return 0;
}
