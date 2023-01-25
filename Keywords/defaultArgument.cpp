#include<iostream>
using namespace std;
//Default argument has one problem that if you want to use default arguments then you should have start with rightmost arguments.
void print(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[100]={1,23,45,78,876,46};
    int n;
    cin>>n;
    int start = 3;
    print(arr,n);//We haven't given start argument so it takes default value from the function.
    return 0;
}