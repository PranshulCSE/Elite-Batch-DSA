#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int k=n;
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
            cout << k << " ";
        }
        k--;
        cout << "\n";
    }
}
