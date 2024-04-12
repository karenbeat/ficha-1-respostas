#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    int numero = rand() % 100 + 1;
    int tentativas = 0;
    int palpite;

    std::cout << "Pense em um numero entre 1 e 100. Vou tentar adivinhar em no maximo 7 perguntas.\n";

    while (tentativas < 7) {
        std::cout << "O numero em que você esta pensando e menor que " << numero << "? (1 para sim, 0 para nao): ";
        std::cin >> palpite;

        if (palpite == 1) {
            numero /= 2;
        } else {
            std::cout << "O numero em que você esta pensando e maior que " << numero << "? (1 para sim, 0 para não): ";
            std::cin >> palpite;

            if (palpite == 1) {
                numero = (numero + 100) / 2;
            } else {
                std::cout << "Adivinhei! O numero e " << numero << std::endl;
                break;
            }
        }
        ++tentativas;
    }

    if (tentativas >= 7) {
        std::cout << "Nao consegui adivinhar o numero. Talvez você tenha trapaceado...\n";
    }

    return 0;
}

