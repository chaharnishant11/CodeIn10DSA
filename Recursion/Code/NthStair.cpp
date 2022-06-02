//Program to find the number of ways to reach the nth stair
#include <iostream>
using namespace std;
int countWays(int n){
    if (n==1 || n==2){
        return n;
    }
    else{
        return countWays(n-1)+countWays(n-2);
    }
}
int main(){
    int N;
    cout<<"Enter a positive number : ";
    cin>>N;
    cout<<"Number of ways to reach "<<N<<"th Stair are = "<<countWays(N)<<endl;
}