#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;
 
int count_Triplets(int A[], int N){
     int count = 0;
     sort(A, A + N);
     for(int i = 0; i < N; i++){
       for(int j = i + 1; j < N; j++){
          for(int k = j + 1; k < N; k++){
              if(A[i] + A[j] == A[k]){
                    count++;
              }
          }
       }
     }
  return count; 
}
 
int main() {
	// Your code goes here;
	int A[] = {3,2,4,5,8,9,10};
	int N = 7;
	cout << count_Triplets(A, N);
	return 0;
}