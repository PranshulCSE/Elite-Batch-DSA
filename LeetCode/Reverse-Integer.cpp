#include<iostream>
using namespace std;

int reverse(int x){
    if(x == 0) return 0;
    long long ans = 0;
    while(x != 0){
        ans = ans * 10 + x % 10;
        x /= 10;
    }
    if(ans > INT_MAX || ans < INT_MIN) return 0;
    return ans;
}

int main(){
    int x;
    cout<<"Enter any Number: ";
    cin >> x;
    cout << reverse(x) << endl;
    return 0;
}