#include <iostream>

using namespace std;

int main(){
    //condition ? true : false
    //it is a smaller way of writing if else

    // so if a is 11 put c = a+1 and if a is not 11 put c=a+10
    //this can be done using if-else and also ternary

    int a=11;
    int c;
    //If else
    if(a==11){
        c=a+1;
    }
    else{
        c=a+10;
    }
    cout<<"C after if-else : "<<c<<endl;


    //using ternary
    c = (a==11)?(a+1):(a+10);
    cout<<"C after ternary : "<<c<<endl;

    //Both give same output since both mean the same thing
}