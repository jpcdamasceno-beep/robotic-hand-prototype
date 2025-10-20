#include <iostream>
using namespace std;

// Simulação simples de uma mão robótica
int main() {
    int comando; // variável para armazenar o comando do usuário
    bool maoAberta = true; // estado inicial: mão aberta

    cout << "=== Mão Robótica Simples ===" << endl;
    cout << "1 - Fechar a mão" << endl;
    cout << "2 - Abrir a mão" << endl;
    cout << "0 - Sair" << endl;

    while (true) {
        cout << "\nEscolha uma opção: ";
        cin >> comando;

        if (comando == 1) {
            if (!maoAberta)
                cout << "A mão já está fechada " << endl;
            else {
                maoAberta = false;
                cout << "A mão está fechando... " << endl;
            }
        } 
        else if (comando == 2) {
            if (maoAberta)
                cout << "A mão já está aberta " << endl;
            else {
                maoAberta = true;
                cout << "A mão está abrindo... " << endl;
            }
        } 
        else if (comando == 0) {
            cout << "Encerrando o sistema..." << endl;
            break;
        } 
        else {
            cout << "Comando inválido! Tente novamente." << endl;
        }
    }

    return 0;
}
