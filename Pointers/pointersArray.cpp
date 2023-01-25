#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,5,8,9,10,56};
    cout<<"Address of first location is:"<<arr<<endl;
    cout<<"Address of first location is:"<<&arr[0]<<endl;
    cout<<"Value at first memory block is:"<<*arr<<endl;
    cout<<"Value at first memory block after increment is:"<<*arr+1<<endl;
    cout<<"Value at first memory block after increment is:"<<*(arr+1)<<endl;
    for(int i=0;i<6;i++){
    cout<<i[arr]<<" ";
    }
    return 0;
}