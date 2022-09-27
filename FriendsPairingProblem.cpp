//find the number of ways in which friends can remain single or can be paired up.

#include<bits/stdc++.h>
using namespace std;

int countFriendsPairings(int n){
    if(n<=2){
        return n;
    }
    return countFriendsPairings(n-1) + (n-1)*countFriendsPairings(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<countFriendsPairings(n)<<endl;
    return 0;
}


