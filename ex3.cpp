#include <iostream>


using namespace std;


void ordenar(float &a, float &b, float &c, float &d) {
    
    float temp;
    bool trocou;

    do {
        trocou = false;
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
            trocou = true;
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
            trocou = true;
        }
        if (c > d) {
            temp = c;
            c = d;
            d = temp;
            trocou = true;
        }
    } while (trocou);
}

int main() {
    float num1 = 4.2;
    float num2 = 1.8;
    float num3 = 3.5;
    float num4 = 2.1;

    cout << "Valores originais: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;

    ordenar(num1, num2, num3, num4);

    cout << "Valores ordenados: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;

    return 0;
}