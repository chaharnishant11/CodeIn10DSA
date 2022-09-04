#include <iostream>

using namespace std;

void wall(int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int r,c;
    cin>>r>>c;

    wall(r,c);
}