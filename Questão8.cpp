void consultaVoo() {
    int numero;
    cout << "Digite o n�mero do voo para consulta: ";
    cin >> numero;

    for (const auto& voo : listaVoos) {
        if (voo.numero == numero) {
            cout << "Informa��es do Voo:\n";
            cout << "N�mero: " << voo.numero << endl;
            cout << "Data: " << voo.data << endl;
            cout << "Hor�rio: " << voo.hora << ":" << voo.minuto << endl;
            cout << "Aeroporto de Sa�da: " << voo.aeroportoSaida << endl;
            cout << "Aeroporto de Chegada: " << voo.aeroportoChegada << endl;
            cout << "Rota: " << voo.rota << endl;
            cout << "Tempo Estimado: " << voo.tempoEstimado << " horas\n";
            cout << "Passageiros: " << voo.passageiros << endl;
            return;
        }
    }

    cout << "Voo n�o encontrado!\n";
}
