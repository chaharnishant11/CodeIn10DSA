// Recursion
// Sum of first n natural numbers

#include <iostream>
using namespace std;

int sumN(int n){ 
    if (n==1){ //Base Case
        return 1;
    }
    
    else{
        return n+sumN(n-1); // sumN(n-1) is recursive call
        // and n + sumN(n-1) is our small calculation
    }
}

int main(){

    int n;
    cout<<"Enter a positive number n : ";
    cin>>n;
    
    cout<<"Sum of first n natural numbers = "<<sumN(n)<<endl;
}
