#include<iostream>
using namespace std;
void update(int **p){
    //p=p+1;
    //NO  CHANGE OCCURS BECAUSE IT IS PASS BY VALUE
     //*p=*p+1;
     //CHANGE OCCURS-VALUE OF P IS INCREASE BY 1 BYTE
     **p=**p+1;
     //CHANGE OCCURS-VALUE OF I IS INCREASE BY 1 VALUE
}
int main(){
    int i=5;
    int *p1= &i;
    int **p2 = &p1;
    cout<<"Before:"<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"After:"<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    
    return 0;
}