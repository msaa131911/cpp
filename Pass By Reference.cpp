#include<iostream>
#include<string>
using namespace std;
// Pass By Reference

void ch_value(int *x){
    *x=20;
}

int main()
{
    int val=10;
    
    ch_value(&val);
    
    cout<<val;
    
}