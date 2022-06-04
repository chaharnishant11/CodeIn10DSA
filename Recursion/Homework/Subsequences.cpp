// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	
	   void helper (string s, string tempAns,int index){
	       if (s.size() == index){
	           cout<< tempAns << " ";
	           return;
	       }
	       
	       // take
	       helper(s,tempAns+s[index],index+1);
	       
	       // not take
	       helper(s, tempAns,index+1);
	       
	      return;
	   }
	   
		vector<string> AllPossibleStrings(string s){
		    vector<string> ans;
		    helper(s,"",0);
		    return ans;
		    // Code here
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
