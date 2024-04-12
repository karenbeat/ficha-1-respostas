#include <iostream>
using namespace std;

void hanoi(int num_discos, int estaca_inicial, int estaca_destino, int estaca_temporaria) {
    if (num_discos == 1) {
        cout << estaca_inicial << " -> " << estaca_destino << endl;
        return;
    }

    hanoi(num_discos - 1, estaca_inicial, estaca_temporaria, estaca_destino);
    cout << estaca_inicial << " -> " << estaca_destino << endl;
    hanoi(num_discos - 1, estaca_temporaria, estaca_destino, estaca_inicial);
}

int main() {
    int num_discos;
    cout << "Digite o numero de discos: ";
    cin >> num_discos;

    cout << "Instrucoes para mover os discos:" << endl;
    hanoi(num_discos, 1, 3, 2);

    return 0;
}
