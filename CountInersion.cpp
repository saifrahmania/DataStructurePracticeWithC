//count the inversion in the given array two elements a[i] and a[j] form an inversion of a[i]>a[j] and i<j;
//3,5,6,9,1,2,7,8
#include<bits/stdc++.h>
using namespace std;

long long merge(int arr[],int l,int mid,int r){
    long long inv = 0;
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
            j++;
            k++;
            inv += (n1-i);
        }
    }

    while(i<n1){
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++;
        j++;

    }
    return inv;

}

long long mergeSort(int arr[],int l,int r){
    long long inv = 0;
    if(l<r){
        int mid = (l+r)/2;
        inv+=mergSort(arr,l,mid);
        inv+=mergSort(arr,mid+1,r);
        inv+=merge(arr,l,mid,r);
    }
           
        
}

int32_t main()
{
    int n;cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>> arr[i];
    }

    cout<<mergeSort()
}

