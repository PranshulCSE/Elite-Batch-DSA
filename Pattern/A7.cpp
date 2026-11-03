// Enter the number of rows: 4
//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
       // Space printing loop
       for (int j = n-i-1; j >= 0; j--)
        {
            cout << " " << " ";
        }
       
          // Star printing loop
          for (int j = 0; j <= i; j++)
        {
            cout << j+1 << " ";
        }
        cout << "\n";
    }
}
