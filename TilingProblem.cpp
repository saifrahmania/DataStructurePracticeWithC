//given a 2xn board and tiles of size 2x1, count the number of ways to tile the given board using the 2x1 tiles. A tile can either be placed horizontally i.e., as a 1x2 tile or vertically i.e., as 2x1 tile.

#include<iostream>
using namespace std;

int countWays(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return countWays(n-1) + countWays(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<countWays(n)<<endl;
    return 0;
}