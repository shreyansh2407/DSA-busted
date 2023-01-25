#include<iostream>
using namespace std;
void SortedArray(int *arr,int n){
    //base case
    if(n==0||n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call
    SortedArray(arr,n-1);
}
int main(){
    int array[5] = {1,5,74,3,54};
    SortedArray(array,5);
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}