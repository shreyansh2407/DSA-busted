#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> str;
    str.push("Shreyansh");
    str.push("Loves");
    str.push("Sneha");
    cout<<"Top element -> "<<str.top()<<endl;
    str.pop();
    cout<<"Top element -> "<<str.top()<<endl;
    return 0;
}