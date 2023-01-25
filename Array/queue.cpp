#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Sneha");
    q.push("loves");
    q.push("Shreyansh");
    cout<<"First element -> "<<q.front()<<endl;
    q.pop();
    cout<<"First element -> "<<q.front()<<endl;
    return 0;
}