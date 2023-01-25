#include<iostream>
using namespace std;
int printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    return 0;
    
}
int main(){
    int array[10]={1,1};
    cout<<array[0]<<" ";
    cout<<array[1]<<" ";
    cout<<array[5]<<" ";
    cout<<endl;

    printArray(array,10);

    return 0;
}