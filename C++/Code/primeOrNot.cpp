//Check if the given number is prime or not

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int i = 2;
    for(i;i<num;i++){
        if (num%i==0){
            cout << "not prime "<<endl;
            break;
        }
    }
    if (i==num){
        cout<<"prime\n";
    }
    return 0;
}