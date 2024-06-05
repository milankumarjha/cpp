//Program in C++ to demontrate the use of Switch-case statements

#include<iostream>
using namespace std;
int main()
{
    int day;
    
    // Asking  for user input. 
    
    cout<<"\nEnter the Day's number :";
    cin>>day;
    switch (day)
    {
      case 1:
        cout<<"Monday";
        break;
      case 2:
        cout<<"Tuesday";
        break;
      case 3:
        cout<<"Wednesday";
        break;
      case 4:
        cout<<"Thursday";
        break;
      case 5:
        cout<<"Friday";
        break;
      case 6:
        cout<<"Saturday";
        break;
      case 7:
        cout<<"Sunday";
        break;
        
        default:
            cout<< "Enter a valid input";
    }
    return 0;
}
