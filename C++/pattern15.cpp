#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns:";
    cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        char ch = 65;
        while(j<=n){
            cout<<ch;
            ch++;
            j+=1;
        }
        cout<<endl;
        
        i++;
    }
    return 0;
}