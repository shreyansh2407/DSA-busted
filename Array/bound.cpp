#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key){
    int start=0,end=n-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
    if(arr[mid]==key){
        ans = mid;
        end = mid-1;
    }
    else if(arr[mid]>key){ //go the left part
        
        end = mid -1;

    }
    else if(arr[mid]<key){  // go the right part
        start = mid+1;
    }
    mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccurence(int arr[],int n,int key){
        int start=0,end=n-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
    if(arr[mid]==key){
        ans = mid;
        start = mid+1;
    }
    else if(arr[mid]>key){ //go the left part
        
        end = mid -1;

    }
    else if(arr[mid]<key){  // go the right part
        start = mid+1;
    }
    mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int even[10] = {1,2,3,3,3,3,3,3,3,4};
    cout<<"First occurence of 3 is at index "<<firstOccurence(even , 10,3)<<endl;
    cout<<"last occurence of 3 is at index "<<lastOccurence(even , 10,3)<<endl;
    return 0;
}