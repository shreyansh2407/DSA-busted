#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns:";
    cin>>n;
    
    int row=1;
    while(row<=n){
        int space=n-row;
        while(space){
        cout<<" ";
        space--;

    }
    int col=1;
    int start=1;
    while(col<=row){
        
        cout<<start;
        start++;
        col++;
    }
    int any=1;
    while(any<=row-1){
        cout<<row-any;
        any++;
    }
    cout<<endl;
    row++;
}
return 0;
}