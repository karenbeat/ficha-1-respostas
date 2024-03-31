#include <iostream>

using namespace std;

int main() {
    float largura, comprimento;

    
    cout << "Digite a largura da sala (em metros): ";
    cin >> largura;

    
    cout << "Digite o comprimento da sala (em metros): ";
    cin >> comprimento;

    
    float area = largura * comprimento;

    
    cout << "A área da sala é: " << area << " metros quadrados." << endl;

    return 0;
}
