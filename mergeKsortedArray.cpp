#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

signed main(){
    int k;
    cin>>k;
    vector<vector<int>> arr(k);
    rep(i,0,k){
        int n;
        cin>>n;
        rep(j,0,n){
            int x;
            cin>>x;
            arr[i].push_back(x);
        }
    }
    
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    rep(i,0,k){
        pq.push({arr[i][0],i});
    }
    vector<int> ans;
    while(!pq.empty()){
        pii p = pq.top();
        pq.pop();
        ans.push_back(p.ff);
        int i = p.ss;
        arr[i].erase(arr[i].begin());
        if(arr[i].size()>0){
            pq.push({arr[i][0],i});
        }
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}