#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int count=i;

        while(j<=i){
            cout<<count;
            count+=1;
            j+=1;
        }
        
        cout<<endl;
        i+=1;
    }
    return 0;
}