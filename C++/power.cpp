#include<iostream>
using namespace std;

int power(int num1,int num2){
    int ans =1;
    for (int  i = 1; i <=num2; i++)
    {
        ans=ans*num1;
    }
    cout<<ans;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    power(a,b);

    return 0;
}