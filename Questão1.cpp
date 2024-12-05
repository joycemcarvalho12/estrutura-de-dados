#include <iostream>
#include <limits>
using namespace std;

int main() {
    int matriz[3][3];
    int maior = numeric_limits<int>::min();
    int menor = numeric_limits<int>::max();

    cout << "Digite os valores da matriz 3x3:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matriz[i][j];
            if (matriz[i][j] > maior) maior = matriz[i][j];
            if (matriz[i][j] < menor) menor = matriz[i][j];
        }
    }

    cout << "Maior elemento: " << maior << endl;
    cout << "Menor elemento: " << menor << endl;
    return 0;
}
