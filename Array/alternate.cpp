#include<iostream>
using namespace std;
void arrayAlternate(int arr[],int size){
    for (int i = 0; i <size; i+=2)
    {
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    
}
void printArray(int arr[],int n){
    for (int  i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int even[8] = {1,2,3,4,5,6,7,8};
    int odd[5] = {1,2,3,4,5};

    arrayAlternate(even,8);
    printArray(even,8);
    arrayAlternate(odd,5);
    printArray(odd,5);

}