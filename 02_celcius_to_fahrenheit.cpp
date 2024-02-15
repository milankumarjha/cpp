// CPP program to convert celcius to fahrenheit.

#include <iostream>
using namespace std;
int main(){
    // Declare variables 
    float cel,fah;

    //Take temperature in degree celcius input form user. 
    cout<< "Enter temperature degree in celcius: ";
    cin>>cel;
  
    // Formula for converting degree celcius into fahrenheit 
    fah=((9/5)*cel)+32;
  
    // display result
    cout<<"Given temperature in degree fahrenheit: "<< fah;
  
    return 0;
}
