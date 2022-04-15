#include <iostream>
using namespace std;

int main() {
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
}
