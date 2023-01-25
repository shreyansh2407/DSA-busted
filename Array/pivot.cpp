#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int even[10] = {3,8,9,1,2};
    cout<<"Hello"<<endl;
    cout<<"Pivot element is at index "<<getPivot(even,5)<<endl;
    return 0;
}