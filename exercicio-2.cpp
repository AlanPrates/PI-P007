#include <iostream>
using namespace std;

bool ehPalindromo(int num) {
    int reverso = 0, original = num;
    while (num > 0) {
        reverso = reverso * 10 + num % 10;
        num /= 10;
    }
    return original == reverso;
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (ehPalindromo(numero)) {
        cout << numero << " é um palíndromo." << endl;
    } else {
        cout << numero << " não é um palíndromo." << endl;
    }

    return 0;
}
