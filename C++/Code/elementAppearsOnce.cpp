/*
Brute Force solution is the simplest approach that we try when it first comes to our mind.
It is just a first idea, and therefore is mostly not the best way to solve the problem.

To solve this problem the brute force approach will be to count how many times each element occurs
and store this data in some other array, but this will take more time and space

So an optimized approach will be to use XOR operation, this operation fives 0 if 2 elements are different
and 1 if both are different
Also,
n^n = 0
n^0 = n
*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int ans = 0;
	    for(int i=0;i<N;i++){
	        ans =ans^A[i];
	    }
	    return ans;
	}
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
  // } Driver Code Ends