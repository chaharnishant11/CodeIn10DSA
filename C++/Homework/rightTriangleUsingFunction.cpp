#include <iostream>

using namespace std;

void pyramid(int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int r;
    cin>>r;
    
    pyramid(r);
}