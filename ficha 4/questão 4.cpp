#include <iostream>

int main() {
    double precos[] = {2.98, 4.50, 9.98, 4.49, 6.87};
    double total = 0.0;
    int produto, quantidade;

    std::cout << "Digite o numero do produto (1 a 5) e a quantidade vendida, separados por espaco:\n";
    std::cout << "Para parar, digite 0 0.\n";

    while (true) {
        std::cin >> produto >> quantidade;
        if (produto == 0 || quantidade == 0) break;

        switch (produto) {
            case 1:
                total += precos[0] * quantidade;
                break;
            case 2:
                total += precos[1] * quantidade;
                break;
            case 3:
                total += precos[2] * quantidade;
                break;
            case 4:
                total += precos[3] * quantidade;
                break;
            case 5:
                total += precos[4] * quantidade;
                break;
            default:
                std::cout << "Produto invalido.\n";
                break;
        }
    }

    std::cout << "O valor total de varejo de todos os produtos vendidos é: R$ " << total << std::endl;

    return 0;
}

