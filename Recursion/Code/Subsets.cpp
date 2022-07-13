// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<vector<int> > ans;
    void solve(vector<int> a,vector<int> temp,int index) {
        //base case
        if(index == a.size()) {
            ans.push_back(temp);
            return;
        }
        
        //inclusion
        temp.push_back(a[index]);
        solve(a,temp,index+1);
        
        //exclusion
        temp.pop_back();
        solve(a,temp,index+1);
        return;
    } 
    
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<int> temp;
        solve(A,temp,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends