#include <iostream>

using namespace std;

int main(){
    for(int i=0;i<10 && i>5;i=i+1){  // executes when value of i is greater than 5 and less than 10
    //So this will not run even once bcz in start value of i is not greater than 5, so loop is never executed
        cout <<"hello code in 10 fam" << endl; //endl brings us in new line
    }

    for(int i=0;i<10;i=i+1){ // this will execute 10 times
        cout <<"hello code in 10 fam" << endl;
    }
    return 0;
}