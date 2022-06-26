// Simple program for check eligibility to vote

#include <iostream>
using namespace std;

int main(){
    int age;    // Int variable to store age
    cin>>age;   // Taking age as input from user

    if (age < 18){ // Checking if age is less than 18
        cout << "Not Eligible to Vote";
    } else {
        cout << "Eligible to Vote";
    }
}