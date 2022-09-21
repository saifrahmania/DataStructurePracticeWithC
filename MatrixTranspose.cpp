/*
Problem: given a matrix A and its number of rows /Column N,
return the transpose of A.
the transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices 
of the matrix
Constrain: 1<=N<=1000 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3] = {{1,2,3},{4,5,7},{7,8,9}};
    
    for(int i = 0;i<3;i++){
        for (int j=i;j<3;j++){
            //swap
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for(int i = 0;i<3;i++){
        
        for (int j = 0;j<3;j++){
            cout<<" "<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    


}
