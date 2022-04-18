#include <iostream>
using namespace std;

int* dobrar(int vetor[]);

int main() {
    /*
    int count = 10;
    int vetor [10];
    vetor[2] = 20;
    int* ponteiro = &count;
    int* ponteiroVetor = vetor;

    cout << "Variável: " << count << endl;
    cout <<"Referência da variável: " << &count << endl;
    cout << "Ponteiro da variável: " << ponteiro << endl;
    cout << "Ponteiro da variável acessando valor: " << *ponteiro << endl;
    cout << "Vetor/Array: " << vetor << endl;
    cout << "Ponteiro do vetor: " << ponteiroVetor << endl;
    cout << "Vetor posição 2: " << vetor[2] << endl;
    cout << "Pointeiro do vetor acessando posição 2: " << ponteiroVetor[2] << endl;
     */

    // Exercício Parte 1:
    cout << "Exercício Parte 1: " << endl;
    int valor = 10;
    int* p1 = &valor;
    int* p2 = &valor;
    cout << "Variável: " << valor << endl;
    cout << "Ponteiro 1: " << *p1 << endl;
    cout << "Ponteiro 2: " << *p2 << endl;
    cout << "Digite um valor para alterar a variável: ";
    cin >> valor;
    cout << "Variável: " << valor << endl;
    cout << "Ponteiro 1: " << *p1 << endl;
    cout << "Ponteiro 2: " << *p2 << endl;

    // Exercício Parte 2:
    cout << "\nExercício Parte 2: " << endl;
    int vetor[3] = {4,5,6};
    int* ponteiro = dobrar(vetor);
    for(int i = 0; i < 3; i++) {
        cout << "Posição " << i << ": " << ponteiro[i] << endl;
    }
}

int* dobrar(int* vetor) {
    for(int i = 0; i < 3; i++) {
        vetor[i] *= 2;
    }

    return vetor;
}
