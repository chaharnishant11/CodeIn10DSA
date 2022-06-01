//Program to calculate 2 raised to the power n

#include <iostream>

using namespace std;

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
    cout<< "Enter a positive number : ";
    cin>>n;
    cout<<"2^"<<n<<" = "<<power(n)<<endl;
    return 0;
}
