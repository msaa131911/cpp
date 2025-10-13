#include<iostream>
#include<string>
using namespace std;
int main()
{
   
    string name;
    //User Input Strings
    cout << "Enter your full name: ";
    getline(cin, name);   // পুরো লাইন নিবে, স্পেসসহ
    cout << "Your name: " << name;
   
}
