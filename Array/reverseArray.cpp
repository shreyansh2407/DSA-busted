#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i <size; i++)
    {
            cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
    
}