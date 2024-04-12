#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


pair<int, int> generateQuestion() {
    srand(time(NULL)); 
    int num1 = rand() % 9 + 1; 
    int num2 = rand() % 9 + 1; 
    return make_pair(num1, num2);
}

int main() {
    while (true) {
        
        pair<int, int> question = generateQuestion();
        int num1 = question.first;
        int num2 = question.second;

        
        cout << "Quanto e " << num1 << " vezes " << num2 << "? ";
        
        
        int answer;
        cin >> answer;

        
        if (answer == num1 * num2) {
            cout << "Muito bom!" << endl;
        } else {
            cout << "Nao. Por favor, tente novamente." << endl;
            
            while (true) {
                cout << "Quanto e " << num1 << " vezes " << num2 << "? ";
                cin >> answer;
                if (answer == num1 * num2) {
                    cout << "Muito bom!" << endl;
                    break;
                } else {
                    cout << "Nao. Por favor, tente novamente." << endl;
                }
            }
        }
    }
    return 0;
}
