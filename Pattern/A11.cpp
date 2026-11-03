
// Enter the number of rows: 4
//         A 
//       A B 
//     A B C 
//   A B C D 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ch ='A';
       // Space printing loop
       for (int j = n-i-1; j >= 0; j--)
        {
            cout << " " << " ";
        }
       
          // Star printing loop
          for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
}
