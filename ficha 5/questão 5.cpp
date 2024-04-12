#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    
    char playAgain;
    do {
        int secretNumber = rand() % 1000 + 1; 
        int guess;
        
        cout << "Eu tenho um numero entre 1 e 1000." << endl;
        cout << "Voce consegue adivinhar o meu numero?" << endl;
        
        do {
            cout << "Digite seu palpite: ";
            cin >> guess;

            if (guess == secretNumber) {
                cout << "Excelente! Voce adivinhou o numero!" << endl;
            } else if (guess < secretNumber) {
                cout << "Muito baixo. Tente novamente." << endl;
            } else {
                cout << "Muito alto. Tente novamente." << endl;
            }
        } while (guess != secretNumber);

        cout << "Voce gostaria de jogar novamente (s ou n)? ";
        cin >> playAgain;
    } while (playAgain == 's' || playAgain == 'S');

    cout << "Obrigado por jogar! Adeus." << endl;
    return 0;
}
