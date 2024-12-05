#include <iostream>
using namespace std;

int main() {
    const int cidades = 7;
    const int meses = 6;
    float indices[cidades][meses];
    float mediaMensal[cidades] = {0};
    float mediaRegiao[meses] = {0};

    for (int i = 0; i < cidades; ++i) {
        cout << "Digite os índices pluviométricos da cidade " << i + 1 << " para os 6 meses:\n";
        for (int j = 0; j < meses; ++j) {
            cin >> indices[i][j];
            mediaMensal[i] += indices[i][j];
            mediaRegiao[j] += indices[i][j];
        }
        mediaMensal[i] /= meses;
    }

    cout << "Média mensal de cada cidade:\n";
    for (int i = 0; i < cidades; ++i) {
        cout << "Cidade " << i + 1 << ": " << mediaMensal[i] << endl;
    }

    cout << "Média de pluviosidade por mês na região:\n";
    for (int j = 0; j < meses; ++j) {
        mediaRegiao[j] /= cidades;
        cout << "Mês " << j + 1 << ": " << mediaRegiao[j] << endl;
    }

    return 0;
}
