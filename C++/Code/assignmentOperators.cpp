#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 15;
    cout<<b<<endl;  // b = 15

    b+=a;  //b = 15 + 5 = 20
    cout<<b<<endl;

    b-=a;  //b = 20 - 5 = 15
    cout<<b<<endl;

    b*=a;  //b = 15 * 5 = 75
    cout<<b<<endl;

    b/=a;  //b = 75 / 5 = 15
    cout<<b<<endl;

    b%=a; //b = 15 % 5 = 0
    cout<<b<<endl;
}