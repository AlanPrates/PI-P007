#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed para números aleatórios

    int numeroSecreto = rand() % 100 + 1;
    int palpite;

    cout << "Bem-vindo ao jogo de adivinhação!" << endl;

    do {
        cout << "Digite seu palpite (entre 1 e 100): ";
        cin >> palpite;

        if (palpite > numeroSecreto) {
            cout << "Palpite muito alto. Tente novamente." << endl;
        } else if (palpite < numeroSecreto) {
            cout << "Palpite muito baixo. Tente novamente." << endl;
        } else {
            cout << "Parabéns! Você acertou o número secreto!" << endl;
        }
    } while (palpite != numeroSecreto);

    return 0;
}
