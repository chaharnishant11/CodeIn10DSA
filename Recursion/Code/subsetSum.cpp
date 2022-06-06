// Recursion
// Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool helper (vector <int> a, int sum,int tempSum, int i){
    	//Base Cases
        if (sum==tempSum){
            return true;
        }
        if (sum<tempSum){
            return false;
        }
        if (i>=a.size()){
            return false;
        }
        
        //Recursive Calls
        int recCall1 = helper(a,sum,tempSum+a[i],i+1);
        int recCall2 = helper(a,sum,tempSum,i+1);
        
        //Small Calculation
        return recCall1 || recCall2;
        
    }
    bool isSubsetSum(vector<int>arr, int sum){
        return helper(arr,sum,0,0);
        // code here 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
