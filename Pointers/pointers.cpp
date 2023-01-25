#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;
    // Address of operator  - - &
    cout<< "Address of num is:"<<&num<<endl;


    int *ptr = &num;
    cout<<"Address of num is:"<<ptr<<endl;
    cout<<"Value of num  is:"<<*ptr<<endl;

    double d=4.56;
    double *ptr1  = &d;
    cout<<"Address of d is :"<<ptr1<<endl;
    cout<<"value of d is :"<<*ptr1<<endl;

    cout<<"Size of num is"<<sizeof(num)<<endl;
    cout<<"Size of *ptr is"<<sizeof(ptr)<<endl;
    cout<<"Size of d is"<<sizeof(d)<<endl;
    cout<<"Size of *ptr1 is"<<sizeof(ptr1)<<endl;

    return 0;
}