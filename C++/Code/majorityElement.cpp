// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
        // your code here
        int el =0;
        int count = 0;
        for(int i=0;i<size;i++){
            if(count==0){
                el = arr[i];
            }
            if (el ==arr[i]) count++;
            else count--;
        }
        
        count=0;
        for(int i=0;i<size;i++){
            if(el==arr[i]) {
                count++;
            }
        }
        
        if(count>size/2){
            return el;
        }
        return -1;
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends