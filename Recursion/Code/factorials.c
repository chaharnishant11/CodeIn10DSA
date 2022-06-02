// Recursion
// Factorial of number n

#include <stdio.h>
long long int factorial(int n) {

    if (n==0 || n==1){ //Base Case
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
    printf("Enter a number whose factorial we need : ");
    scanf("%d",&N);
    
    printf("Factorial of %d",N);
    printf(" is = %lld \n",factorial(N));
}
