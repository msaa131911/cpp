#include<iostream>
#include<string>
using namespace std;

// Function Prototypes

//int sum(int a,int b);   //type 1

int sum(int,int);//type 2

//void g(void);//type1
void g();//type2

int main()
{
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"result:"<<sum(a,b);
    g();//void call
}

//funtion
int sum(int a,int b){
    int c=a+b;
    return c;
}

void g(){
    cout<<"\n programe finish";
}
