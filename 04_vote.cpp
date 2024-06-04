// program to check whether a person is eligible to vote.

#include <iostream>
using namespace std;

int main() {
    // declared variable
    int age;   
    // Get age input from user
    cout<<"Enter your age: ";   
    cin>>age;
    // Check eligiblity of the user to vote using if else    
    if(age<0){
        cout<<"INVALID INPUT !!!";
    }
    else if(age<18){
    cout<<"You are not eligible to vote.";
    }
    else{
        cout<<"You are eligible to vote. ";
    }
    return 0;
}
