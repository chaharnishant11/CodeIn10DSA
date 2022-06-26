// Else and if statements
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;

    // % is the mod operator and it gives reminder after dividing n by 3 and 5 respectively 
    if (n%3==0 && n%5==0){ // Checking if n is divisible by 3 & 5
        cout<<"bang ";
    } else {
        if (n%3 == 0){
            cout << "fizz ";
        } else {
            if (n%5 == 0){
                cout << "buzz ";
            } else {
                cout << "sad ";
            }
        }
    }
// Bang, Fizz and sad are just strings which we are printing to know our output.
// Nested else and if statements are not well organised due to which its hard for anyone to understand the code.    
}
