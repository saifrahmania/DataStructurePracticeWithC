#include<bits/stdc++.h>
using namespace std;
//count the number of paths from start to end point of a gameboard
int countPath(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count = 0;
    for(int i=1; i<=6; i++){
        count += countPath(s+i, e);
    }
    return count;
}

int main(){
    
    cout<<countPath( 0, 6)<<endl;
    return 0;
}
