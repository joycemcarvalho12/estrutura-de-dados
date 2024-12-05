void consultaVoo() {
    int numero;
    cout << "Digite o número do voo para consulta: ";
    cin >> numero;

    for (const auto& voo : listaVoos) {
        if (voo.numero == numero) {
            cout << "Informações do Voo:\n";
            cout << "Número: " << voo.numero << endl;
            cout << "Data: " << voo.data << endl;
            cout << "Horário: " << voo.hora << ":" << voo.minuto << endl;
            cout << "Aeroporto de Saída: " << voo.aeroportoSaida << endl;
            cout << "Aeroporto de Chegada: " << voo.aeroportoChegada << endl;
            cout << "Rota: " << voo.rota << endl;
            cout << "Tempo Estimado: " << voo.tempoEstimado << " horas\n";
            cout << "Passageiros: " << voo.passageiros << endl;
            return;
        }
    }

    cout << "Voo não encontrado!\n";
}
