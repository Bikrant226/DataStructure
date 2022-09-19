#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n){
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
}


int main(){
    int arr[]={12,35,1,10,34,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The largest element in array is:"<<largest(arr,n);
    return 0;
}