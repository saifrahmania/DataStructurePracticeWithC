#include<bits/stdc++.h>
using namespace std;
/**
 * Given an array a[] of size n. For every i from ) to n-1 output max(a[0],a[1],......,a[n])
 **/
int main(){
    int mx = INT16_MIN;
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        mx = max(mx,a[i]);
        cout<<mx<<endl;
    }

    return 0;
}