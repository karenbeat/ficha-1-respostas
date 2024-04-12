#include <iostream>

int main() {
    std::cout << "Triplos de Pitagoras:\n";
    for (int lado1 = 1; lado1 <= 20; ++lado1) {
        for (int lado2 = 1; lado2 <= 20; ++lado2) {
            for (int hipotenusa = 1; hipotenusa <= 20; ++hipotenusa) {
                if (lado1 * lado1 + lado2 * lado2 == hipotenusa * hipotenusa) {
                    std::cout << lado1 << ", " << lado2 << ", " << hipotenusa << std::endl;
                }
            }
        }
    }

    return 0;
}

