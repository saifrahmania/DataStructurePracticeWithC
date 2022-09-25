//write a program to count the number of 1's in the binary representation of a number
#include <iostream>
using namespace std;

int numberofones(int n){
    int count = 0;
    while(n){
        count++;
        n = n & (n-1);
    }
    return count;
}

int main(){
    //cout<<numberofones(5)<<endl;
    cout<<numberofones(19)<<endl;
    return 0;
}