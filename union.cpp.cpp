#include<iostream>
#include<string>
using namespace std;

union mony
{
    /*data*/
    int rice;
    char car;
    float pounds;
};

int main()
{
    union mony m1;
    m1.rice=34;
    m1.car='c';
    cout<<m1.car;
}