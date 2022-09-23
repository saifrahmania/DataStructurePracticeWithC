/*
Video no 11
*/
#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 2, b = 4;
    int *aptr = &a;
    int *bptr = &b;
    // //int* aptr = &a;
    // cout<<*aptr<<endl;
    // *aptr=20 ;
    // //cout<<a<<endl;

    // int arr[] = {10,20,30};
    // cout<<*arr<<endl;
    // int *ptr = arr;
    // for(int i = 0;i<3;i++){
    //     cout<<*(arr+i)<<endl;

    // }
    // swap(aptr,bptr);
    swap(&a, &b);
    cout << a << endl<< b << endl;
}