#include <iostream>

using namespace std;

int main(){
    int r,c;
    cin>>r>>c;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}