#include<iostream>
using namespace std;
bool search(int num[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(num[i]==key){
            return 1;
        }
        
    }
    return 0;
    
}
int main(){
    int num[100]={1,2,3,4,5,7,6,8,9,5,6,35,565,675,643,24};
    int key,size;
    cout<<"Enter the size of the array:";
    cin>>size;
    cout<<"Enter the key you want to search:";
    cin>>key;

    bool found = search(num,size,key);
    if(found){
        cout<<"Key is found"<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
    }
    
    return 0;
}