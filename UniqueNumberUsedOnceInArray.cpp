//write a program to findf a unique nimber in an array where all numbers except one, are present twice

#include <iostream>
using namespace std;

int uniqueNumber(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main(){
    int arr[7] = {1,2,3,4,1,2,3};
    cout<<uniqueNumber(arr, 7)<<endl;
    return 0;
}