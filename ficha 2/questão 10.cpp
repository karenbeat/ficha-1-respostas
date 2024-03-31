#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string inputString;
    int countVowels[5] = {0}; // Um contador para cada vogal
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    // Solicita ao usuário que digite uma string com 5 caracteres
    cout << "Digite uma string com 5 caracteres: ";
    getline(cin, inputString);

    // Verifica a ocorrência de vogais na string
    for (char c : inputString) {
        switch (tolower(c)) {
            case 'a':
                countVowels[0]++;
                break;
            case 'e':
                countVowels[1]++;
                break;
            case 'i':
                countVowels[2]++;
                break;
            case 'o':
                countVowels[3]++;
                break;
            case 'u':
                countVowels[4]++;
                break;
        }
    }

    // Exibe quantas vezes cada vogal aparece na string
    cout << "Quantidade de vezes que cada vogal aparece na string:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << vowels[i] << ": " << countVowels[i] << endl;
    }

    // Criptografando a string
    for (char &c : inputString) {
        switch (c) {
            case 'a':
                c = 'i';
                break;
            case 'e':
                c = 'o';
                break;
            case 'i':
                c = 'u';
                break;
        }
    }

    // Exibe a nova string criptografada
    cout << "A string criptografada é: " << inputString << endl;

    return 0;
}