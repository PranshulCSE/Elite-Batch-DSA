// Program to convert decimal to Binary number
#include <iostream>
using namespace std;
int main() {
    long long decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    long long binary = 0;
    long long base = 1;

    while (decimal > 0) {
        int lastDigit = decimal % 2;
        binary += lastDigit * base;
        decimal /= 2;
        base *= 10;
    }

    cout << "The binary equivalent is: " << binary << endl;

    return 0;
}
