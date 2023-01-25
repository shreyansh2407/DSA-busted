#include<iostream>
#include<deque>
using namespace std;
int main(){
    
    deque<int> a;
    a.push_back(1);
    a.push_front(2);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    a.pop_back();
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    a.pop_front();
    a.push_front(7);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}