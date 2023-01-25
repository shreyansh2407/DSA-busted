#include<iostream>
using namespace std;
int main(){
    int first =0;
    int second =1;
    int next=0;
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        
        next = first+second;
        first=second;
        second = next;
    }
    cout<<next<<endl;
    return 0;
}