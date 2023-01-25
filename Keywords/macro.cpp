#include<iostream>
#define pi 3.14
//By using macro we don't take extra storage.
using namespace std;
int main(){
    int radius;
    cin>>radius;
    double area = pi*radius*radius;
    cout<<"Area is :"<<area<<endl;
    return 0;
}