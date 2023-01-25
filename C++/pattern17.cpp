#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number or rows and columns:";
    cin>>n;
    char ch;
    int i=1;
    while(i<=n){
        int  j=1;
        while(j<=i){
            ch='A'+i+j-2;
            cout<<ch;
            j+=1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}