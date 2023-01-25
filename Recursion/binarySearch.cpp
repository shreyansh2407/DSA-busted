#include<iostream>
using namespace std;
bool binarySearch(int *arr,int s,int e , int key){
    //base case
    if(s>e)
    return false;
    int mid = s+ (e-s)/2;
    if(arr[mid]<key)
    return binarySearch(arr,mid+1,e,key);
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}
int main(){
    int arr[5]={1,23,35,67,89};
    int size=5;
    int key=78;
    bool ans = binarySearch(arr,0,size-1,key);
    cout<<"Answer is:"<<ans<<endl;

}