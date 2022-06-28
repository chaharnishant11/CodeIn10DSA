//To find multiples of 2 less than n

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int i = 2;
    for(i;i<num;i++){
        if (i%2!=0){
            continue;
        }
        cout << i <<" ";
    }
    cout<<endl;
    return 0;
}