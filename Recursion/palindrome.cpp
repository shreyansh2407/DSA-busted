#include<iostream>
using namespace std;

bool checkPalindrome(string str,int s,int e){
    //base case
    if(s>e){
        return true;
    }
    //recursive call
    if(str[s++]!=str[e--]){
        return false;
    }
    else{
        return checkPalindrome(str,s,e);
    }
}
int main(){
    string name="Shreyansh";
    bool ans = checkPalindrome(name,0,name.length()-1);
    if(ans){
        cout<<"It is palindrome"<<endl;
    }
    else{
        cout<<"It is not palindrome"<<endl;
    }
    return 0;
}