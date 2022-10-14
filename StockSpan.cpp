#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    stack<int> s;
    vector<int> ans;
    for(int i=0;i<n;i++){
        while(!s.empty() && a[s.top()]<a[i]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(-1);
        }
        else{
            ans.push_back(s.top());
        }
        s.push(i);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}