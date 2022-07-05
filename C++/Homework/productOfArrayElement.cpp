#include <iostream>
using namespace std;

int productArray(int arr[], int n){
    int pr=1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){ return 0; }
        pr=pr*arr[i];

    }
    return pr;
}

int main(){
    int arr[4] = {6,2,6,3};
    cout<<productArray(arr,4)<<endl;
}