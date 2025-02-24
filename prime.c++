#include <iostream>
using namespace std;

bool isPrime(int N) {
    if (N <= 1) {
        return false;
    }


    for (int i = 2; i < N; i++) {
        if (N % i == 0) {  
            return false;
        }
    }

    return true; 
}

int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;

    if (isPrime(N)) {
        cout << N << " is a prime number." << endl;
    } else {
        cout << N << " is not a prime number." << endl;
    }

    return 0;
}

