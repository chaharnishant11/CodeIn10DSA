// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	    void solve(string s,string tempAns,int index,vector<string>& ans) {
            //base case 
            if(s.size() == index){
               ans.push_back(tempAns);
	           return;
	        }

	        //take
	        solve(s,tempAns+s[index],index+1,ans);

	        //not take
	        solve(s,tempAns,index+1,ans);

	        return;
        }
        
		vector<string> AllPossibleStrings(string s){
		    vector<string> ans;
            solve(s,"",0,ans);
            ans.pop_back();
            sort(ans.begin(),ans.end());
            return ans;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends