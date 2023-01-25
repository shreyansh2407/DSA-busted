#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns:";
    cin>>n;
    int i=1;
    char ch;
    while(i<=n){
        int j=1;
        ch='A'+n-i;
        while(j<=i){
            cout<<ch;
            ch=ch+1;
            j++;
        }
        i++;
        cout<<endl;

    }
    return 0;
}