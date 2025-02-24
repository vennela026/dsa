#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int N) {
    int original = N;
    int sum = 0;
    int numDigits = 0;
    while (N != 0) {
        N /= 10;
        numDigits++;
    }

    N = original; 
    while (N != 0) {
        int digit = N % 10;  
        sum += pow(digit, numDigits);  
        N /= 10;  
    }

    return sum == original;
}

int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;

    if (isArmstrong(N)) {
        cout << N << " is an Armstrong number." << endl;
    } else {
        cout << N << " is not an Armstrong number." << endl;
    }

    return 0;
}

