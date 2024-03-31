#include <iostream>

using namespace std;

int main() {
    int numero;
    bool ehPrimo = true;

    cout << "Digite um número inteiro positivo maior que 1: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "O número deve ser maior que 1." << endl;
        return 0;
    }


    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            ehPrimo = false;
            break;
        }
    }
    if (ehPrimo) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}