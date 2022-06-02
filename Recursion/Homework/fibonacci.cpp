#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        
        // Base Case
        if (n == 0) {
            return 0;
        }
        
        if (n == 1){
            return 1;
        }
        
        // Recursive Call
        long long int recCall1 = nthFibonacci(n-1);
        long long int recCall2 = nthFibonacci(n-2);
        
        // Small Calculation
        long long int smallCal = recCall1 + recCall2;
        
        return smallCal;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
