#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age = 20;
    bool isCitizen = true;

    if (age >= 18) {
    cout << "Old enough to vote.\n";
    
    //Nested If 
    if (isCitizen) {
    cout << "And you are a citizen, so you can vote!\n";
  } else {
    cout << "But you must be a citizen to vote.\n";
  }
}  else {
   cout << "Not old enough to vote.\n";
}
}