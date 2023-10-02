#include <iostream>
using namespace std;

void imprimirFibonacci(int n) {
    int primeiro = 0, segundo = 1, proximo;

    cout << "Sequência de Fibonacci até " << n << " termos:" << endl;

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        cout << proximo << " ";
    }
    cout << endl;
}

int main() {
    int termos;
    cout << "Digite o número de termos desejado: ";
    cin >> termos;

    imprimirFibonacci(termos);

    return 0;
}
