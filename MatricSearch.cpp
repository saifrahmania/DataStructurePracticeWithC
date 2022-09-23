/*
2D matrix
Problem : Write an algorithm to find that the given value exixts in the matrix or not
Integers in each row are sorted in ascending from top to bottom

Sample:
+-----+-----+-----+-----+
|  1  |  4  |  7  |  11 |
+-----+-----+-----+-----+
|  2  |  5  |  8  |  12 |
+-----+-----+-----+-----+
|  3  |  6  |  9  |  16 |
+-----+-----+-----+-----+
|  10 |  13 |  14 |  17 |
+-----+-----+-----+-----+

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int mat[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int r = 0,c = m-1;
    bool found = false;

    while(r<n and c>=0){
        if(mat[r][c]==target){
            found=true;
        }
        if (mat[r][c] >target){
            c--;
        }
        else {
            r++;
        }

        
    }

    if(found){
            cout<<"Element found";
        }
    else{
            cout<<"Element does not exist in the matrix";
        }



}