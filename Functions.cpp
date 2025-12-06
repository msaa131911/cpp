#include<iostream>
#include<string>
using namespace std;

//funtion
int sum(int a,int b){
    int c=a+b;
    return c;
}

int main()
{
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"result:"<<sum(a,b);
}