#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Voo {
    int numero;
    int data; // 1-Seg, 2-Ter, ..., 8-Diario
    int hora, minuto;
    int aeroportoSaida, aeroportoChegada;
    int rota;
    float tempoEstimado;
    int passageiros;
};

vector<Voo> listaVoos;

void cadastrarVoo() {
    Voo novoVoo;
    cout << "Digite o n�mero do voo: ";
    cin >> novoVoo.numero;
    cout << "Digite a data (1-Seg, 2-Ter, ..., 8-Diario): ";
    cin >> novoVoo.data;
    cout << "Digite o hor�rio (hora e minuto): ";
    cin >> novoVoo.hora >> novoVoo.minuto;
    cout << "Digite o ID do aeroporto de sa�da: ";
    cin >> novoVoo.aeroportoSaida;
    cout << "Digite o ID do aeroporto de chegada: ";
    cin >> novoVoo.aeroportoChegada;
    cout << "Digite o ID da rota: ";
    cin >> novoVoo.rota;
    cout << "Digite o tempo estimado de voo (em horas): ";
    cin >> novoVoo.tempoEstimado;
    cout << "Digite o n�mero de passageiros a bordo: ";
    cin >> novoVoo.passageiros;

    listaVoos.push_back(novoVoo);
    cout << "Voo cadastrado com sucesso!\n";
}
