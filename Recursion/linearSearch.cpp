#include<iostream>
using namespace std;

bool linearSearch(int *arr,int size,int key){
    //base case
    if(size==0)
    return false;
    if(key==arr[0])
    return true;
    else{
        int remaining = linearSearch(arr+1,size-1,key);
        return remaining;
    }
}
int main(){
    int arr[5] = {1,2,4,6,4};
    int size=5;
    int key =98;
    bool ans = linearSearch(arr,size,key);
    cout<<ans<<endl;
    return 0;
}