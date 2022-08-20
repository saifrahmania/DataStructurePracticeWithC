#include<bits/stdc++.h>
using namespace std;
//Sub array is the continuous part of an actual array;
//Number of sub-array = nC2+n
/**
 * A subsequence is a sequence that can be derived an arry bu selecting zero or more elements,
 * without changing tthe order of the remaining elements.
 * Number of subsequence of an array = 2^n;
 * **/

/**
 * Given an array a[] of size n; Output sum of each subarray of the given array
*/

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curr = 0;
    for(int i = 0;i<n;i++){
        curr = 0;
        for(int j = i ;j< n;j++){
            curr+=a[j];
            cout<<curr<<" ";
        }
    }
}