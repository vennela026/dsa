#include <iostream>

using namespace std;

int reverseDigits(int n) {
    int revNum = 0;
    while (n > 0) {
        revNum = revNum * 10 + n % 10;
        n = n / 10;
    }
    return revNum;
}

int main() {
    int n = 4562;
    cout << reverseDigits(n);
    return 0;
}

