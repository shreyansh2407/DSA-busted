#include<iostream>
using namespace std;

void reverse(string& str,int s,int e){
    //base case
    if(s>e){
        return;
    }
    swap(str[s++],str[e--]);
    //Recursive call
    reverse(str,s,e);
}
int main(){
    string name = "Shreyansh";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}