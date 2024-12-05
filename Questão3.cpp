#include <iostream>
using namespace std;

int main() {
    const int alunos = 5;
    const int provas = 4;
    float notas[alunos][provas];
    float mediaAluno[alunos] = {0};
    float mediaTurma = 0;

    for (int i = 0; i < alunos; ++i) {
        cout << "Digite as notas do aluno " << i + 1 << ":\n";
        for (int j = 0; j < provas; ++j) {
            cin >> notas[i][j];
            mediaAluno[i] += notas[i][j];
        }
        mediaAluno[i] /= provas;
        mediaTurma += mediaAluno[i];
    }

    mediaTurma /= alunos;

    for (int i = 0; i < alunos; ++i) {
        cout << "Média do aluno " << i + 1 << ": " << mediaAluno[i] << endl;
    }
    cout << "Média da turma: " << mediaTurma << endl;

    return 0;
}
