#include <iostream>

int main() {
    int numeros[5];

    std::cout << "Digite cinco numeros entre 1 e 30:\n";
    for (int i = 0; i < 5; ++i) {
        std::cin >> numeros[i];
    }

    std::cout << "Barras de asteriscos:\n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < numeros[i]; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

