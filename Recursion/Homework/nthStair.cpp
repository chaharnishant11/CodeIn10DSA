#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countWays(int n)
    {
        //code here
        
        //Base Case
        if (n==1 || n==2){
            return  n;
        }
        
        // Recursive Call
        int recCall1 = countWays(n-1);
        int recCall2 = countWays(n-2);
        
        // Small Calculation
        int smallCal = recCall1 + recCall2;
        
        return smallCal;
    }
};



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl;
    }
    return 0;
}
