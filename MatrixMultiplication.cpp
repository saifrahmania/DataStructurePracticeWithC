/*
Video: 9.2 Time 11:26
Problem: given two dimensional array of sizes n1xn2  and n2xn3. your task is to multiply these matrices
and output the multiplied matrix

constrain: 1<=n1,n2,n3<=1000 

Input:
Matrix M1
+-----+-----+-----+-----+ 
|  2  |  4  |  1  |  2  |
+-----+-----+-----+-----+
|  8  |  4  |  3  |  6  |
+-----+-----+-----+-----+
|  1  |  7  |  9  |  5  |
+-----+-----+-----+-----+   (3x4)

Matrix M2
+-----+-----+-----+
|  1  |  2  |  3  |
+-----+-----+-----+
|  4  |  5  |  6  |
+-----+-----+-----+
|  7  |  8  |  9  |
+-----+-----+-----+
|  4  |  5  |  6  |
+-----+-----+-----+         (4x3)

output:
+------+------+------+
|  33  |  42  |  51  |
+------+------+------+
|  69  |  90  |  111 |
+------+------+------+
|  112 |  134 |  156 |
+------+------+------+         (3x3)


Approach:
1. Make a nested loop of order 3. in the outer loop iterate over rows of first matrix and in the inner loop 
iterate over columns of second matrix.

2. multiply rows of firxt matrix with columns of second matrix in the innermost loop and update the
answer matrix
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        for(int k=0;k<n2;k++){
            ans[i][j]+=m1[i][k]*m2[k][j]
        }
    }
}

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Input of Matrix Dimension\n";
    cin>>n1>>n2>>n3;
    cout<<"Input of the matrix 1\n";
    int m1[n1][n2];
    int m2[n2][n3];
    for( int i = 0;i<n1;i++){
        for(int j =0 ;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"input of matrix 2:\n";
    for( int i = 0;i<n2;i++){
        for(int j =0;j<n3;j++){
            cin>>m2[i][j];
        }
    }

    int ans[n1][n3];

    for( int i = 0;i<n1;i++){
        for(int j =0 ;j<n3;j++){
            ans[i][j]=0;
        }
    }

    for(int i = 0;i<n1;i++){
        for (int j = 0;j<n3;j++){
            for(int k = 0;k<n2;k++){
                ans[i][j]+= m1[i][k]*m2[k][j];
            }
        }
    }

    for(int i = 0;i<n1;i++){
        for (int j = 0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }




}