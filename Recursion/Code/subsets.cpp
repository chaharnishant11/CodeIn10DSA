#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
        
    public:
    
    vector<vector<int> > ans; //Global Variable
    //vector is a Dynamic Data structure similar to array but unlike array we do not need to declare its size in advance
    
    void helper(vector <int> A,vector<int>temp, int i){
        if (i==A.size()){            //Base Case
            ans.push_back(temp);     //this will keep the contents of temp in ans for now
            return;
        }
        
        temp.push_back(A[i]); //Appends or adds element at the end
        helper(A,temp,i+1);   //Inclusion or Take condition
        
        temp.pop_back();      //Removes an element from the end
        helper(A,temp,i+1);    //Exclusion or not-take condition
        
        return;
    }
    
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<int> temp;
        helper(A,temp,0);
        sort(ans.begin(),ans.end()); //this is to sort the array
        return ans;
    }
    
};


// { Driver Code Starts.

int main(){
	int n, x;
    cout<<"Enter number of elements : ";
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
    cout<<endl<<"Subsets are : "<<endl;
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++){
			cout << res[i][j] << " ";
        }
		cout << endl;
	}

	return 0;
}  // } Driver Code Ends
