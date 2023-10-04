#include <iostream>

using namespace std;

void multiplica_por_n(int *vet, int qtde, int n) {
    for (int i = 0; i < qtde; i++) {
        vet[i] *= n;
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int qtde = sizeof(vetor) / sizeof(vetor[0]);
    int multiplicador = 3;

    cout << "Vetor original: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    multiplica_por_n(vetor, qtde, multiplicador);

    cout << "Vetor após multiplicação: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}