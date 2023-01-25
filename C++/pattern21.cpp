#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns:";
    cin>>n;
    int row=1;
    while(row<=n){
        int space=row-1;
        while(space){
            cout<<" ";
            space--;
        }
        int col=1;
        while(col<=n-row+1){
            cout<< row;
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}