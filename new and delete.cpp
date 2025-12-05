#include<iostream>
#include<string>
using namespace std;

int main()
{
        //new operatoruse:
    int *p=new int(40);
    //*p=999999;
   cout<<"*p:"<<*p<<endl;
    
    //new operatoruse:
    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;//sm to:*(arr+1)=20;
    arr[2]=30;
    //delete & free memory:
    delete[] arr;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
}