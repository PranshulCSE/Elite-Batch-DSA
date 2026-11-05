// Logic to check if a number is an Armstrong number or not
#include <iostream>
using namespace std;

void calculate(long long &sum, int digit, int digits) {
    long long power = 1;
    for (int i = 0; i < digits; i++) {
        power *= digit;
    }
    sum += power;
}

bool isArmstrong(int n) {
    if (n < 0) {
        return false;
    }

    const int original = n;
    int digits = 0;
    int temp = n;
    do {
        temp /= 10;
        digits++;
    } while (temp != 0);

    long long sum = 0;
    do {
        int digit = n % 10;
        calculate(sum, digit, digits);
        n /= 10;
    } while (n != 0);

    return sum == original;
}

int main() {
    int n;
    cout << "Enter any Number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << "It is an Armstrong number." << endl;
    } else {
        cout << "It is not an Armstrong number." << endl;
    }

    return 0;
}