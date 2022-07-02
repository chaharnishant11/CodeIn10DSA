#include <iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans * i;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    
    while(n>0){
        n--;
        int t;
        cin >> t;
        cout<<factorial(t)<<endl;
    }
}