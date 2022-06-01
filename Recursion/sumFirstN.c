// Recursion
// Sum of first n natural numbers

#include <stdio.h>

int sumN(int n){ //Base Case

    if (n==1){
        return 1;
    }
    
    else{
        return n+sumN(n-1); // sumN(n-1) is recursive call
        // and n + sumN(n-1) is our small calculation
    }
}

int main(){

    int n;
    printf("Enter a positive number n : ");
    scanf("%d",&n);
    
    printf("Sum of first n natural numbers = %d \n",sumN(n));
    
}
