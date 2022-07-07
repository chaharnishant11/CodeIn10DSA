#include <iostream>
using namespace std;
int main()
{
    int e;
    cout<<"Enter edge length : ";
    cin>>e;
    
    //upper half including middle row
    for(int i=0;i<e;i++){
        for(int k=0;k<e-i;k++){      // for printing spaces
            cout<<"  ";
        }
        for(int j=0;j<(2*i)+1;j++){  // for printing stars
            cout<<"* ";
        }
        cout<<endl;
    }
    
    //lower half excluding middle row
    for(int i=e-2;i>=0;i--){
        for(int k=0;k<e-i;k++){      // for printing spaces
            cout<<"  ";
        }
        for(int j=(2*i)+1;j>0;j--){  // for printing stars
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}