#include <iostream>
#include <cmath>
using namespace std;

int calcularNumeroDeDigitos(int num) {
    int digitos = 0;
    while (num != 0) {
        num /= 10;
        digitos++;
    }
    return digitos;
}

bool ehNumeroArmstrong(int num) {
    int digitos = calcularNumeroDeDigitos(num);
    int soma = 0;
    int original = num;

    while (num != 0) {
        int digito = num % 10;
        soma += pow(digito, digitos);
        num /= 10;
    }

    return soma == original;
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (ehNumeroArmstrong(numero)) {
        cout << numero << " é um número armstrong." << endl;
    } else {
        cout << numero << " não é um número armstrong." << endl;
    }

    return 0;
}
