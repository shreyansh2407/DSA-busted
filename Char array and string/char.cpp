#include<iostream>
using namespace std;

char lowercase(char ch){
    
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(char name[],int n){
    int s=0;
    int e = n-1;
    while(s<=e){
        
        if(lowercase(name[s])!=lowercase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }

}
int getLength(char name[]){
    int count = 0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Your name:"<<name<<endl;
    int len = getLength(name);
    cout<<"Length of your name is :"<<len<<endl;
    reverse(name,len);
    cout<<"Your reversed name is:"<<name<<endl;
    cout<<"Is palindrome or not:"<<checkPalindrome(name,len)<<endl;
    return 0;
}