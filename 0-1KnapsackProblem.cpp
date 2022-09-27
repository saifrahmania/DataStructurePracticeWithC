//put n items with given weight and value in a knapsack of kapacity w to get maximum value in the knapsack


#include<bits/stdc++.h>
using namespace std;

int knapsack(int value[],int weight[],int n,int w){
    if(n==0 || w==0){
        return 0;
    }
    if(weight[n-1]<=w){
        return max(value[n-1]+knapsack(value,weight,n-1,w-weight[n-1]),knapsack(value,weight,n-1,w));
    }
    else if(weight[n-1]>w){
        return knapsack(value,weight,n-1,w);
    }
}


int main(){
    int n = 3;
    
    int value[] = {60,100,150};
    int weight[] = {10,20,30};
    
    int w = 50;
    
    cout<<knapsack(value,weight,n,w)<<endl;
    return 0;
}