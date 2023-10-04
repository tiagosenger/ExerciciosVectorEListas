#include <iostream>
#include <string>

using namespace std;

string codificar(const string& texto) {
    string resultado = texto;

    for (char& c : resultado) {
        if (isalpha(c)) {
            if (c == 'z') {
                c = 'a';
            } else if (c == 'Z') {
                c = 'A';
            } else {
                c++;
            }
        }
    }

    return resultado;
}

int main() {
    string frase;

    while (true) {
        cout << "Digite uma frase para codificar (ou 'sair' para sair): ";
        getline(cin, frase);

        if (frase == "sair") {
            break;
        }

        string frase_codificada = codificar(frase);
        cout << "Frase codificada: " << frase_codificada << endl;
    }

    return 0;
}
