#include <iostream>
#include <string>

using namespace std;

int helper(string S, int start, int end){
    if (start>=end){
        return 1;
    }
    if(S[start]!=S[end]){
        return 0;
    }
    return helper(S, start+1, end-1);
}
	
int isPalindrome(string S)
{
    int n=S.size()-1;
    return helper(S,0,n);
}

int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    int result = isPalindrome(s);
    if (result == 1){
        cout<<"String is palindrome"<<endl;
    }
    else{
        cout<<"String is NOT palindrome"<<endl;
    }
}