#include <iostream>
using namespace std;
bool palindrome(int n)
{
    int revNum = 0;
    int org = n;
    while (n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if (org == revNum) {
        return true;
    } else {
        return false;
    }
}


int main() {
    int number =455554;
    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
