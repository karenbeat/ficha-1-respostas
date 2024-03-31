#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    float cateto1, cateto2;

   
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;

    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;

    float hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    cout << "A hipotenusa é: " << hipotenusa << endl;

    return 0;
}