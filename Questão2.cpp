#include <iostream>
using namespace std;

char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

void exibirTabuleiro() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << tabuleiro[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "---------\n";
    }
}

bool verificarVencedor(char jogador) {
    for (int i = 0; i < 3; ++i) {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) return true;
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador) return true;
    }
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) return true;
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) return true;
    return false;
}

bool tabuleiroCheio() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (tabuleiro[i][j] == ' ') return false;
    return true;
}

int main() {
    char jogadorAtual = 'X';
    while (true) {
        exibirTabuleiro();
        int linha, coluna;
        cout << "Jogador " << jogadorAtual << ", digite a linha e a coluna (1-3): ";
        cin >> linha >> coluna;
        --linha; --coluna;
        if (linha < 0 || linha >= 3 || coluna < 0 || coluna >= 3 || tabuleiro[linha][coluna] != ' ') {
            cout << "Movimento inválido! Tente novamente.\n";
            continue;
        }
        tabuleiro[linha][coluna] = jogadorAtual;
        if (verificarVencedor(jogadorAtual)) {
            exibirTabuleiro();
            cout << "Jogador " << jogadorAtual << " venceu!\n";
            break;
        }
        if (tabuleiroCheio()) {
            exibirTabuleiro();
            cout << "Empate!\n";
            break;
        }
        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
    }
    return 0;
}
