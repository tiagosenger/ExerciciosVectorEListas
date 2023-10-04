#include <iostream>

using namespace std;

void calcula(int &X, int &Y) {
    int soma = X + Y;     
    int subtracao = X - Y; 

    X = soma; 
    Y = subtracao; 
}

int main() {
    int X = 10;
    int Y = 5;

    cout << "Valores iniciais: X = " << X << ", Y = " << Y << endl;

     calcula(X, Y);

    cout << "Valores atualizados: X = " << X << ", Y = " << Y << endl;

    return 0;
}