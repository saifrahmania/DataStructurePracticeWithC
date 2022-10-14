#include<bits/stdc++.h>
using namespace std;

int get_max_area(vector<int>a){
    int n=a.size();
    stack<int> s;
    int max_area=0;
    int i=0;
    while(i<n){
        if(s.empty() || a[s.top()]<=a[i]){
            s.push(i);
            i++;
        }
        else{
            int top=s.top();
            s.pop();
            int area=a[top]*(s.empty()?i:i-s.top()-1);
            max_area=max(max_area,area);
        }
    }
    while(!s.empty()){
        int top=s.top();
        s.pop();
        int area=a[top]*(s.empty()?i:i-s.top()-1);
        max_area=max(max_area,area);
    }
    return max_area;
}

int32_t main()
{
    vector<int> a = {2,1,5,6,2,3};
    cout<<get_max_area(a);
}