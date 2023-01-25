#include<iostream>
using namespace std;
int factorial(int number){
    int fact=1;
    for (int i = 1; i <=number; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}

int nCr(int n,int r){
    int num = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    int ans = num/denom;
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"Answer is:"<<nCr(n,r)<<endl;
    return 0;
}