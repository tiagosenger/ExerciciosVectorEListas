#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

vector<int> encontra_posicoes(const string& texto, char letra, int* tamanho) {
    vector<int> posicoes;

    char letra_minuscula = tolower(letra);

    for (int i = 0; i < texto.length(); i++) {
        if (tolower(texto[i]) == letra_minuscula) {
            posicoes.push_back(i);
        }
    }

    *tamanho = posicoes.size();

    return posicoes;
}

int main() {
    string texto = "Olá mundo!";
    char letra = 'n';

    int tamanho_vetor;

    vector<int> posicoes = encontra_posicoes(texto, letra, &tamanho_vetor);

    cout << "Posições da letra '" << letra << "' na string: ";
    for (int i = 0; i < tamanho_vetor; i++) {
        cout << posicoes[i] << " ";
    }
    cout << endl;

    cout << "Tamanho do vetor: " << tamanho_vetor << endl;

    return 0;
}
