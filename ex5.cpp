#include <iostream>

using namespace std;

int insere_meio(int *vetor, int &qtde, int elemento) {
    
    if (qtde >= 100) {
        cout << "Erro: O vetor está cheio." << endl;
        return qtde;
    }

    int meio = qtde / 2;

    for (int i = qtde; i > meio; i--) {
        vetor[i] = vetor[i - 1];
    }

    vetor[meio] = elemento;
    qtde++;

    return qtde;
}

int main() {
    int vetor[100] = {1, 2, 3, 4, 5, 6};
    int qtde = 6;
    int elemento = 100;

    cout << "Vetor original: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    insere_meio(vetor, qtde, elemento);

    cout << "Vetor após a inserção: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}