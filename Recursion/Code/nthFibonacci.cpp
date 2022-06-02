//Program to find nth number in a Fibonacci series

#include <iostream>

using namespace std;

int fibonacci(int n){
    if (n==0){         //Base Case 1
        return 0;
    }
    else if (n==1){    //Base Case 2
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);  //fibonacci(n-1) and fibonacci(n-2) are recursive calls
        //addition of the two is our small calculation
    }
    
}

int main(){
    int n;
    cout<<"Enter a non-negative number : ";
    cin>>n;
    cout<<"nth Fibonacci number is : "<<fibonacci(n)<<endl;
}