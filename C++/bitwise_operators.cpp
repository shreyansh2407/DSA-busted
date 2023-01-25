#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
    cout<<"a&b:"<<( a &b)<<endl;
    cout<<"a|b:"<<(a|b)<<endl;
    cout<<"~a:"<<~a<<endl;
    cout<<"a^b:"<<(a^b)<<endl;

    cout<<(24>>1)<<endl;
    cout<<(24<<1)<<endl;
    cout<<(24>>2)<<endl;
    cout<<(24<<2)<<endl;

    int i=7;
    cout<<(++i)<<endl;
    cout<<(--i)<<endl;
    cout<<(i++)<<endl;
    cout<<(i--)<<endl;
    cout<<i;
    return 0;
}
