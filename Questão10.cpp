#include <iostream>
using namespace std;

int somaRecursiva(int n) {
    if (n <= 1) return n;
    return n + somaRecursiva(n - 1);
}

int main() {
    int n;
    cout << "Digite um n�mero N: ";
    cin >> n;
    cout << "A somat�ria de 1 a " << n << " �: " << somaRecursiva(n) << endl;
    return 0;
}
