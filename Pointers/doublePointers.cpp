#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *ptr = &i;
    int **ptr1 = &ptr;
    cout<<"Everything is alright"<<endl<<endl;
    cout<<ptr<<endl;
    cout<<*ptr1<<endl;

    cout<<"Printing the values of i:"<<endl<<endl;
    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;

    
    cout<<endl<<endl;


    cout<<"Printing the values of p:"<<endl<<endl;
    cout<<&i<<endl;
    cout<<ptr<<endl;
    cout<<*ptr1<<endl;
    return 0;
}