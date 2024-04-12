#include <iostream>

int main() {
    double e = 1.0;
    int termos = 10;

    for (int i = 1; i <= termos; ++i) {
        int fatorial = 1;
        for (int j = 1; j <= i; ++j) {
            fatorial *= j;
        }
        e += 1.0 / fatorial;
    }

    std::cout << "O valor de x e: " << e << std::endl;

    return 0;
}

