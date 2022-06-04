// Recursion
// Program to find all possible subsequences of a given string/sequence

#include <iostream>

using namespace std;

void sequence(string s, string temp, int index){

    if (s.size()==index){            //Base Case
        cout<<temp<<" ";
        return;
    }

    // take
    sequence(s,temp+s[index],index+1);

    // not take
    sequence(s,temp,index+1);

}

int main(){

    string S;
    cout<<"enter a string : ";
    cin>>S;

    sequence(S,"",0);
    cout<<endl;

}