#include<iostream>
#include<string>
using namespace std;
int main()
{
    string firstName = "John";
    string lastName = "Doe";
    string fullName1 = firstName + lastName;
    string fullName2 = firstName + " " + lastName;//" " or ' '
    string fullName3 = firstName.append(lastName);//append() function
    
    cout << fullName1<<endl;
    cout << fullName2<<endl;
    cout << fullName3<<endl;
    
}


