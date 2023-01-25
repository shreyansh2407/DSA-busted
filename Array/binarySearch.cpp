#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int element){
    int start = 0;
    int end = size-1;
    //More optimised line for calculating mid value
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==element){
            return mid;
        }
        //Going to left part of the sorted array
        if(arr[mid]>element){
            end = mid-1;
        }
        //Going to the right part of the array
        else{
            start= mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int num[10]= {1,2,3,4,7,8,67,78,2407};
    int index = binarySearch(num,10,2407);
    cout<<"Element 24 is at index "<<index;
    return 0;
}