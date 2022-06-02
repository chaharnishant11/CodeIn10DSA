//Program to calculate 2 raised to the power n

#include <stdio.h>

int power(int n){
    if (n==1){                 //Base Case
        return 2;
    }
    else{
        return 2*power(n-1);   //multiplication with 2 is small calculation & power(n-1) is the recursive call
    }
}

int main() {
    int n;
    printf("Enter a positive number : ");
    scanf("%d",&n);
    printf("2^%d",n);
    printf(" = %d\n",power(n));
    return 0;
}
