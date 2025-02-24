#include <iostream>
using namespace std;

void getDivisors(int N) {
    
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {  
            cout << i << " ";  
        }
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;

    cout << "Divisors of " << N << " are: ";
    getDivisors(N);
    
    return 0;
}

