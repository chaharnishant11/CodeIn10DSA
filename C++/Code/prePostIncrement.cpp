#include <iostream>
using namespace std;

int main(){
    //pre-increment
    //value is increased and then assigned
    int a = 10;
    int b = ++a;
    cout<<a<<" "<<b<<endl; //11 11

    //post-increment
    //value is assigned and then increased
    int c = 10;
    int d = c++;
    cout<<c<<" "<<d<<endl; //11 10
}