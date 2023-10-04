#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {

    if (n <= 0) {
        cout << "Erro: Vetor vazio!" << endl;
        return;
    }

    maximo = vetor[0];
    minimo = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        } else if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main() {
    int vetor[] = {12, 5, 7, 9, 25, 1, 8};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int maximo, minimo;

    maxmin(vetor, tamanho, maximo, minimo);

    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;

    return 0;
}