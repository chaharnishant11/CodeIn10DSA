// Recursion
// Factorial of number n

#include <iostream>
using namespace std;

long long int factorial(int n) { //Base Case

    if (n==0 || n==1){
        return 1;
    }
    
    else{
        //return n * factorial(n-1) one way
        //other way
        
        int recResult = factorial(n-1); // Recursive Call
        int result = n*recResult;       // Small Calculation
        return result;
    }
}

int main(){

    int N;
    cout<<"Enter a number whose factorial we need : ";
    cin>>N;
    
    cout<<"Factorial of "<<N<<" is = "<<factorial(N)<<endl;

}
