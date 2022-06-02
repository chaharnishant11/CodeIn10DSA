#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
    long long int factorial(int N){
       // Base Case
       if (N == 1 || N == 0){
           return 1;
       }
       
       // Recursive Call
       long long int recResult = factorial(N-1);
      
       // Small Calculation 
       long long int result = N*recResult;
       
       return result;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}
