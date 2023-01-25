#include<iostream>
using namespace std;
int main(){
    int i=5;
    //Creating a reference variable
    int &j = i;
    i++;
    cout<<i<<" "<<j<<endl;
    j++;
    cout<<i<<" "<<j<<endl;
    return 0;
}