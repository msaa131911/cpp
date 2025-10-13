#include<iostream>
#include<string>
using namespace std;
int main()
{
    //Access Strings
    string myString = "Hello";
    cout <<"Frist Number:"<< myString[0]<<endl;//cout << myString.at(0);  // First character
    
    //last string
    cout <<"last Number:"<< myString[myString.length() - 1]<<endl;//cout << myString.at(myString.length() - 1);   character
    
    //Change String Characters
    myString[0] = 'J';//myString.at(0) = 'J';
    cout << myString<<endl;
}