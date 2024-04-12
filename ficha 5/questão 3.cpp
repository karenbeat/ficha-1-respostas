#include <iostream>
#include <vector>
using namespace std;

bool isPerfect(int num) {
    int sum_factors = 1; 

    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum_factors += i;
            if (i != num / i) 
                sum_factors += num / i;
        }
    }

    
    return sum_factors == num;
}

void printFactors(int num) {
    cout << "Fatores de " << num << ": ";
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    cout << "Números perfeitos entre 1 e 1000:" << endl;
    for (int num = 1; num <= 1000; num++) {
        if (isPerfect(num)) {
            cout << num << " é um número perfeito." << endl;
            printFactors(num);
        }
    }
    return 0;
}
