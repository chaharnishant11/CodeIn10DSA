#include <iostream>
using namespace std;

long long int sumArray(int arr[], int n){
    long long int sm=0;
    for(int i=0;i<n;i++){
        sm+=arr[i];
    }
    return sm;
}

int main(){
    int arr[10] = {6,2,6,0,1,3,8,9,7,3};
    cout<<sumArray(arr,10)<<endl;
}