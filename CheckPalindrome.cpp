#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    bool check =true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check =  false;
            break;
        }
    }

    if (check){
        cout<<"Palindrome";
    }
    else{
        cout<<" not a palindrome";
    }

}