#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *q = &i;
    cout<<*q<<endl;
    cout<<q<<endl;

    int *p=0;
    p=&i;
    cout<<*p<<endl;
    cout<<p<<endl;



    int num=5;
    int *p = &num;

    cout<<num<<endl;
    (*p)++;
    cout<<num<<endl;
    
    return 0;
}