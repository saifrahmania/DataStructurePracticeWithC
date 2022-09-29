#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

//numbers are comming and we have to tell the median after each input

priority_queue<int,vi,greater<int>> pqmin;
priority_queue<int,vi> pqmax;
void insert(int x){
    if(pqmax.size()==pqmin.size()){
        if(pqmax.size()==0){
            pqmax.push(x);
            return;
        }
        if(x<pqmin.top()){
            pqmax.push(x);
        }
        else{          
            pqmin.push(x);            
        }
    }
    else{
        if(pqmax.size()>pqmin.size()){
            if(x<pqmax.top()){
                pqmin.push(pqmax.top());
                pqmax.pop();
                pqmax.push(x);
            }
            else{
                pqmin.push(x);
            }
        }
        else{
            if(x>pqmin.top()){
                pqmax.push(pqmin.top());
                pqmin.pop();
                pqmin.push(x);
            }
            else{
                pqmax.push(x);
            }
        }
    }
}

double findMedian(){
    if(pqmax.size()==pqmin.size()){
        return (pqmax.top()+pqmin.top())/2.0;
    }
    else{
        if(pqmax.size()>pqmin.size()){
            return pqmax.top();
        }
        else{
            return pqmin.top();
        }
    }
}

signed main()
{
    insert(10);
    insert(5);
    insert(15);
    insert(20);
    insert(3);
    cout<<findMedian()<<endl;
}