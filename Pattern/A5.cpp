
// Enter the number of rows: 4

// 1 
// 1 2 
// 1 2 3 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
     
        // Number printing loop
         for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
            
        }
        cout << "\n";
    }
}
