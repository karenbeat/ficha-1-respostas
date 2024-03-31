#include <iostream>

using namespace std;

int main() {
    float distancia_km;
    float valor_total;
    float custo_medio;

    cout << "Digite a distância em quilômetros: ";
    cin >> distancia_km;


    if (distancia_km <= 50) {
        valor_total = distancia_km * 1.75;
    } else if (distancia_km <= 100) {
        valor_total = 50 * 1.75 + (distancia_km - 50) * 1.65;
    } else {
        valor_total = 50 * 1.75 + 50 * 1.65 + (distancia_km - 100) * 1.50;
    }


    custo_medio = valor_total / distancia_km;


    cout << "O valor total a pagar é: R$" << valor_total << endl;
    cout << "O custo médio por quilômetro é: R$" << custo_medio << endl;

    return 0;
}