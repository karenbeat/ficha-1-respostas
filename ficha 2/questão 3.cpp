#include <iostream>
using namespace std;

int main() {
    
    float raio, diametro, area;
    const float pi = 3.14159;

  
    cout << "Digite o raio do circulo: ";
    cin >> raio;

    diametro = 2 * raio;

    
    area = pi * raio * raio;


    cout << "O diametro da circunferencia e: " << diametro << endl;
    cout << "A area do circulo e: " << area << endl;

    return 0