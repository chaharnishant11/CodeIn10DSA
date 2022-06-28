//Demonstration of switch statement
//print hello if n is divisible by 3
//print sad if remainder is 1
//print close if remainder is 2

#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter a number : ";
    cin >> n;

    switch (n%3)
    {
        case 0:
            cout<<"hello ";
            break;      // break tells that get out of this switch statement & don't execute any line after this
            // if you do not put break here then after getting a correct condition all other statement including those of other cases below it will be executed

        case 1:
            cout<<"sad ";
            break;

        case 2:
            cout<<"close ";
            break;

        default:           // default executes is no other condition is true
            break;
    }
}