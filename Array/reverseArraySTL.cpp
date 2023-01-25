#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> v,int m){
    int s=m;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int  main(){
    vector<int> v;
    v.push_back(15);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    v.push_back(19);

    vector <int> ans = reverseArray(v,2);
    print(ans);
    return 0;
}