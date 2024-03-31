#include <iostream>
using namespace std;

int main() {
    
    cout << "Quadrado:\n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    
    
    cout << "\nCirculo Oval:\n";
    for (int i = 0; i < 5; ++i) {
        cout << " *";
        for (int j = 0; j < 7; ++j) {
            cout << "  ";
        }
        cout << "*\n";
    }
    for (int j = 0; j < 13; ++j) {
        cout << " *";
    }
    cout << endl;

    
    cout << "\nSeta:\n";
    cout << "  *  \n";
    cout << " *** \n";
    cout << "
