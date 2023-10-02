#include <iostream>
using namespace std;

bool ehNumeroPerfeito(int num) {
    int soma = 0;
    for (int i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma == num;
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (ehNumeroPerfeito(numero)) {
        cout << numero << " é um número perfeito." << endl;
    } else {
        cout << numero << " não é um número perfeito." << endl;
    }

    return 0;
}
