#include <iostream>

unsigned long long int calcularFatorial(int n) {
    unsigned long long int fatorial = 1;
    for (int i = 1; i <= n; ++i) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;
    std::cout << "Digite um numero inteiro não negativo: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "Por favor, digite um numero nao negativo.\n";
        return 1;
    }

    unsigned long long int resultado = calcularFatorial(numero);
    std::cout << "O fatorial de " << numero << " é: " << resultado << std::endl;

    return 0;
}

