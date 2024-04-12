#include <iostream>
#include <cmath> 

using namespace std;


bool ehPrimo(int numero) {
    if (numero <= 1)
        return false;
    if (numero <= 3)
        return true;

    
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0)
            return false; 
    }
    return true; 
}

int main() {
    cout << "Números primos entre 2 e 1000:" << endl;

   
    cout << "Usando n/2 como limite superior:" << endl;
    for (int i = 2; i <= 1000; ++i) {
        if (ehPrimo(i))
            cout << i << " ";
    }
    cout << endl;

    cout << "Usando raiz quadrada de n como limite superior:" << endl;
    for (int i = 2; i <= 1000; ++i) {
        if (ehPrimo(i))
            cout << i << " ";
    }
    cout << endl;

    return 0;
}
