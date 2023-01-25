#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns:";
    cin>>n;
    int i=3;
    while(i<=n&&i>0){
        int j=1;
        int count=i;

        while(j<=n-i+1){
            cout<<n-i+j;
            
            j+=1;
        }
        
        cout<<endl;
        i-=1;
    }
    return 0;
}