//C++ program to find Simple Interest.

#include <iostream>
using namespace std;
int main(){
    
    int principal,rate,time,SI;
    // asking user for input
  
    cout<<"Enter the principal amount: ";
    cin>> principal;
    cout<< "Enter the rate: ";
    cin>> rate;
    cout<< "Enter the time ( in years) :";
    cin>> time;
    
    // Formula for calculating simple interest
    
    SI= (principal*rate*time);
    //Displaying result
    cout<<"Simple Interest :"<<SI;
}
