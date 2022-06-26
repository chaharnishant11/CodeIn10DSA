// Using switch statement to check if n is divisible by 3 or not

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
            break;      // break is used to exit switch statement & to not execute any other case of switch after that
        
        case 1:
            cout<<"sad ";
            break;

        case 2:
            cout<<"close ";
            break;

        default:           // default will be executed is no case is true
            break;
    }
// Using switch statement we can optimise our programs and make them easily understandable.
}