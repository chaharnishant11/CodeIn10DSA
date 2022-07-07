// Initialize all elements of an array to same value in C++


#include <iostream>
using namespace std;

int main(){
    //1. Using for or even while loops, Easiest logic
    int a[4];
    for(int i=0;i<4;i++){
        a[i]=4;
    }
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //2. Using fill_n function
    int b[4];
    fill_n(b,4,5); //array_name, array_size, element_value
    for(int i=0;i<4;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    //3. Just write them one by one
    int c[4]={6,6,6,6};
    for(int i=0;i<4;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

}