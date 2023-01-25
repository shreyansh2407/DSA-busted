#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns:";
    cin>>n;
    int row=1;
    int start=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }
        int col=1;
        while(col<=row){
            cout<<start;
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}