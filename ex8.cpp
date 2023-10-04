#include <iostream>
#include <cmath>

using namespace std;

bool eh_primo(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int conta_primos(int *vet, int qtde) {
    int contador = 0;

    for (int i = 0; i < qtde; i++) {
        if (eh_primo(vet[i])) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int qtde = sizeof(vetor) / sizeof(vetor[0]);

    int primos = conta_primos(vetor, qtde);

    cout << "Quantidade de números primos no vetor: " << primos << endl;

    return 0;
}