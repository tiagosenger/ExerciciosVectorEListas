#include <iostream>

using namespace std;


int* intercala(int *vet1, int tam1, int *vet2, int tam2) {

    int tamanhoResultado = tam1 + tam2;

    int *resultado = new int[tamanhoResultado];

    int index1 = 0;
    int index2 = 0;
    int indexResultado = 0;

    while (index1 < tam1 && index2 < tam2) {
        resultado[indexResultado++] = vet1[index1++];
        resultado[indexResultado++] = vet2[index2++];
    }

    while (index1 < tam1) {
        resultado[indexResultado++] = vet1[index1++];
    }

    while (index2 < tam2) {
        resultado[indexResultado++] = vet2[index2++];
    }

    return resultado;
}

int main() {
    int vetor1[] = {1, 3, 5};
    int tam1 = 3;

    int vetor2[] = {2, 4, 6};
    int tam2 = 3;

    int *resultado = intercala(vetor1, tam1, vetor2, tam2);

    int tamanhoResultado = tam1 + tam2;

    cout << "Vetor intercalado: ";
    for (int i = 0; i < tamanhoResultado; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    delete[] resultado;

    return 0;
}