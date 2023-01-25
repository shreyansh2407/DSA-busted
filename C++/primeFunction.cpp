#include<iostream>
using namespace std;
int primeNumber(int num){
    for (int i = 2; i <num; i++)
    {
        if(num%i==0){
            cout<<"Not a prime number";
            return 0;
        }
        
        
    }
 cout<<"Prime number";
 return 1;
    
    
}
int main(){
    int n;
    cout<<"Enter your number:";
    cin>>n;
    primeNumber(n);
    return 0;
}