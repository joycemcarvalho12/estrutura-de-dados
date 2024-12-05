#include <iostream>
using namespace std;

int somaRecursiva(int n) {
    if (n <= 1) return n;
    return n + somaRecursiva(n - 1);
}

int main() {
    int n;
    cout << "Digite um número N: ";
    cin >> n;
    cout << "A somatória de 1 a " << n << " é: " << somaRecursiva(n) << endl;
    return 0;
}
