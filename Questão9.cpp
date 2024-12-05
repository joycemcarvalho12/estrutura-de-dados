void removeVoo() {
    int numero;
    cout << "Digite o número do voo para remoção: ";
    cin >> numero;

    for (auto it = listaVoos.begin(); it != listaVoos.end(); ++it) {
        if (it->numero == numero) {
            listaVoos.erase(it);
            cout << "Voo removido com sucesso!\n";
            return;
        }
    }

    cout << "Voo não encontrado!\n";
}
