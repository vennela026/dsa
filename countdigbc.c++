#include <iostream>
using namespace std;

int countDigits(int N) {
    if (N == 0) return 1;  
    
    int count = 0;
    if (N < 0) N = -N;  
    while (N > 0) {
        N /= 10;  
        count++;  
    }
    
    return count;
}

int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;
    
    cout << "The number of digits in " << N << " is: " << countDigits(N) << endl;
    
    return 0;
}

