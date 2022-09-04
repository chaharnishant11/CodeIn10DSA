# include <iostream>
using namespace std;

int main(){
    int i = -1; //in while & do while loop you must initialize a variable before hand

    do {
        cout<<"hello code in 10 fam"<<endl;
        i-=2;
    } while (i>0); // Note : this condition was not even true but still the program executed once because of do-while loop
}