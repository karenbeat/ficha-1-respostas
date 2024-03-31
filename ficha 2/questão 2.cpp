#include <iostream>
using namespace std;

int main() {
    
    float num1, num2;
    
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    
    float soma = num1 + num2;
    float produto = num1 * num2;
    float diferenca = num1 - num2;
    float quociente;

    
    if (num2 != 0) {
        quociente = num1 / num2;
    } else {
        cout << "Divisão por zero não é permitida." << endl;
        return 1; 
    }

    
    cout << "Soma: " << soma << endl;
    cout << "Produto: " << produto << endl;
    cout << "Diferença: " << diferenca << endl;
    cout << "Quociente: " << quociente << endl;

    return 0; 
}
