#include<iostream>
using namespace std;
int evenOdd(int num){
    if(num%2==0){
        cout<<"Even number"<<endl;
    }
    else{
        cout<<"Odd number"<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter your number:";
    cin>>num;
    evenOdd(num);
    return 0;

}