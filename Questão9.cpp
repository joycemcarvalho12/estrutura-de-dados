void removeVoo() {
    int numero;
    cout << "Digite o n�mero do voo para remo��o: ";
    cin >> numero;

    for (auto it = listaVoos.begin(); it != listaVoos.end(); ++it) {
        if (it->numero == numero) {
            listaVoos.erase(it);
            cout << "Voo removido com sucesso!\n";
            return;
        }
    }

    cout << "Voo n�o encontrado!\n";
}
