# include <iostream>
using namespace std;

int main(){
    //And gives true when all statements are true, we get false if even one is false
    //Or gives true if even one statement is true, we get false only if everything is false
    //Not, also called complement, gives opposite, so true becomes false and false becomes true
    
    bool a = true;
    bool b = false;

    cout << "a and b  " << (a&&b) << endl; //0
    cout << "a or b  " << (a||b) << endl; //1
    cout << "not a  " << (!a) << endl; //0
    cout << "not b  " << (!b) << endl; //1

    //0 means false and 1 means true

}