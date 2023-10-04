#include <iostream>

using namespace std;

float calc_serie(int N) {
    if (N <= 0) {
        cout << "Erro: N deve ser maior que zero." << endl;
        return 0;
    }

    float S = 0;

    for (int i = 1; i <= N; i++) {
        S += static_cast<float>(i) / (N - i + 1);
    }

    return S;
}

int main() {
    int N = 10;

    float resultado = calc_serie(N);

    cout << "O valor da série para N = " << N << " é: " << resultado << endl;

    return 0;
}
