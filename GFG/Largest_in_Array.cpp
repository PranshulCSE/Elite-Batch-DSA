#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest) largest=arr[i];
    }
    return largest;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cout<<"Enter the size of the array: ";
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout<<"The largest element in the array is: ";
        cout << obj.largest(arr) << endl;
    }
    return 0;
}

