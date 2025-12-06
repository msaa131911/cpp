#include<iostream>
#include<string>
using namespace std;

// Function Prototypes

//int sum(int a,int b);   //type 1

int sum(int,int);//type 2

int main()
{
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"result:"<<sum(a,b);
}

//funtion
int sum(int a,int b){
    int c=a+b;
    return c;
}