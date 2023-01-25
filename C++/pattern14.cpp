#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns:";
    cin>>n;
    int i=1;
    char ch = 65;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch;
            j+=1;
        }
        cout<<endl;
        ch++;
        i++;
    }
    return 0;
}