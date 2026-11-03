// Enter the number of rows: 4
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 

#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        
        cout<<"\n";
    }
}