#include<iostream>
using namespace std;
int score = 17;
//Problem with global variable is that any function can change the value of global variable.
void a(){
    cout<<"Value of score in a:"<<score<<endl;
    score++;
}

void b(){
    cout<<"Value of score in b:"<<score<<endl;
}

int main(){
    a();
    b();
    cout<<"Value of score in main:"<<score<<endl;
    return 0;
}