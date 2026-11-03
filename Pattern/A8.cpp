// Enter the number of rows: 4
// A 
// B B 
// C C C 
// D D D D 
#include<iostream>
using namespace std;
int main(){
    char ch='A';
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<"\n";
    }
}