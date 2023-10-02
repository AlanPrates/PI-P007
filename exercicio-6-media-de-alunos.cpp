#include <iostream>
using namespace std;

int main() {
    int matricula;
    float nota1, nota2, nota3, media;
    char continuar;

    do {
        cout << "Digite a matrícula do aluno: ";
        cin >> matricula;
        cout << "Digite as três notas do aluno (separadas por espaços): ";
        cin >> nota1 >> nota2 >> nota3;

        media = (nota1 + nota2 + nota3) / 3;

        cout << "MATRICULA NOTA1 NOTA2 NOTA3 MEDIA" << endl;
        cout << "===========================================" << endl;
        cout << matricula << " " << nota1 << " " << nota2 << " " << nota3 << " " << media << endl;

        cout << "Deseja cadastrar outro aluno? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    return 0;
}
