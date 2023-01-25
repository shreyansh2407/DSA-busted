#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"Enter the value of a:";
    cin>>a;
    int b;
    cout<<"Enter the value of b:";
    cin>>b;
    char op;
    cout<<"Enter the operations you want to perform:";
    cin>>op;
    switch(op){
        case '+': cout<<(a+b)<<endl;
                    break;
        case '-': cout<<(a-b)<<endl;
                    break;
        case '/': cout<<(a/b)<<endl;
                    break;
        case '*': cout<<(a*b)<<endl;
                    break;
        case '%': cout<<(a%b)<<endl;
                    break;
        default:cout<<"Please enter valid operations."<<endl;
        
    
    }
    return 0;
}