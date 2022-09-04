// FizzBuzz program
#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;

    // % is called mod operator and finds the reminder when n is divided by 3 and the reminder when its divided by 5
    if (n%3==0 && n%5==0){ //Checking if n is divisible by both 3 & 5
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

    //As you can see this code has too many nested if-else which doesn't look good (nested means if-else inside if-else)
}