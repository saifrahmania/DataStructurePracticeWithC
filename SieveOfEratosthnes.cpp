#include<iostream>
using namespace std;
void printPrimes(int n){
    int prime[n+1] = {0};
    for(int i=2;i<=n;i++){
        if(prime[i] == 0){
            for(int j=i*i;j<=n;j+=i){
                prime[i] = 1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i] == 0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    printPrimes(n);
    return 0;
}