#include <iostream>
using namespace std;

//Passing in a function
void printArray(int arr[], int size){ //Array is passed by reference by default

    arr[2]=179;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    arr[1] = 41;
}

int main(){

    //declaration
    int a[4]={1,2,3,4};

    //printing
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //accessing
    cout<<a[3]<<endl;

    //using function
    printArray(a,4);
    cout<<endl;

    //printing after function
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}