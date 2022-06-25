#include <iostream>
using namespace std;

int main(){
    int age;    // Created a variable of type int to hold age
    cin>>age;   // Inputted age from the user

    if (age < 18){ // Checking if user is less than 18
        cout << "Not Eligible to Vote";
    } else {
        cout << "Eligible to Vote";
    }
}