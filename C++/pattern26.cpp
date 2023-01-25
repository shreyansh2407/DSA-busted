#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter nubmers of rows and columns:";
    cin>>n;
    int row=1;
  
    while(row<=n){
        int col=1;
        while(col<=n-row+1){
            cout<<col;
            col++;
        }
          int star1=1;
        while(star1<=row-1){
            cout<<"*";
            star1++;
        }
        int star2=1;
        while(star2<=row-1){
            cout<<"*";
            star2++;
        }
        int col2=1;
        while(col2<=n-row+1){
            cout<<n-row-col2+2;
            col2++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}