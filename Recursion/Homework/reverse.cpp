#include <iostream>
using namespace std;
int n;
void helper(int* s,int start,int end){
    if (start>=end){
        for (int i=0;i<n;i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    else{
        int temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        return helper(s, start + 1 , end-1);
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int s[n];
        for (int i=0;i<n;i++){
            cin>>s[i];
        }
        helper(s,0,n-1);
    	//code
    }
	return 0;
}