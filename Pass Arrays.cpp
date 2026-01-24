#include<iostream>
#include<string>
using namespace std;

void my_fun(int mynum[5]){
    for(int i=0;i<5;i++){
        cout<<mynum[i]<<endl;
    }
}

int main(){
    int mynum[5]={10,20,30,40,50};
    my_fun(mynum);
    
}