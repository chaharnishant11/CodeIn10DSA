// Well organised code using else if statements
#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;

    if (n%3==0 && n%5==0){
        cout<<"bang ";
    } else if (n%3 == 0){
        cout << "fizz ";
    } else if (n%5 == 0){
        cout << "buzz ";
    } else {
        cout << "sad ";
    }
}