#include<iostream>
using namespace std;
inline int getMax(int &a,int&b){
    return (a>b)?a:b;
}
int main(){
    int a=1;
    int b=3;
    int ans = getMax(a,b);
    cout<<"Answer  is :"<<ans<<endl;
    return 0;
}