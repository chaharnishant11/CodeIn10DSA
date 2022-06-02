//Program to find the number of ways to reach the nth stair
#include <stdio.h>

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
    printf("Enter a positive number : ");
    scanf("%d",&N);
    printf("Number of ways to reach %d",N);
    printf("th Stair are = %d\n",countWays(N));
}