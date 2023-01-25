#include<iostream>
using namespace std;
int main(){
    cout<<endl;
    char ch = 'a';
    switch (ch)
    {
    case 'a': cout<<"A"<<endl;
            break;
    
    case 'b': cout<<"B"<<endl;
    default:
                cout<<"It is default case."<<endl;
        break;
    }
    cout<<endl;
}