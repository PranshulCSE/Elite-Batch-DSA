// Program to convert binary number to decimal number   

#include <iostream>
using namespace std;

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    long long decimal = 0;
    long long base = 1;

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        binary /= 10;
        base *= 2;
    }

    cout << "The decimal equivalent is: " << decimal << endl;

    return 0;
}