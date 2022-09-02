/*
permutation: rearrange of a sequence into a new sequence
Idea: You are at index idx, try out all the possible swap Ensuring you don't produce duplicates.

Sample Test Case
Input: nums = [0,1]
Output: [[0,1],[1,0]]

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

time complexity: O(n!)
*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
/**  Without Library function
void permute(vector<int>&a,int idx){
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }
    for(int i = idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);        
    }
    return;
}*/
int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
    }
    //permute(a,0);   --> Without Library function
    //with library function 
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
    for(auto v:ans){
        for (auto i: v){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}