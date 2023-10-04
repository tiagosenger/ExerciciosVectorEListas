#include <iostream>
#include <string>

using namespace std;

string caracteres_comuns(const string& A, const string& B) {
    string C;

    for (char c : A) {
        if (B.find(c) != string::npos && C.find(c) == string::npos) {
            C += c;
        }
    }
    return C;
}

int main() {
    string A = "abcdef";
    string B = "cdefghi";

    string C = caracteres_comuns(A, B);

    cout << "Caracteres comuns entre A e B: " << C << endl;

    return 0;
}