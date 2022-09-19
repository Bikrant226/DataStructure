#include<bits/stdc++.h>
using namespace std;

void second_largest_second_smallest(int arr[],int n){
    int large=-1,second_large=-1,small=INT_MAX,second_small=INT_MAX;
    if(n==0 || n==1){
        cout<<"Invalid";
    }
    for(int i=0;i<n;i++){
        large=max(arr[i],large);
        small=min(arr[i],small);
    }
    for(int i=0;i<n;i++){
       if(arr[i]>second_large && arr[i]!=large){
        second_large=arr[i];
       }

       if(arr[i]<second_small && arr[i]!=small){
        second_small=arr[i];
       }
       
    }

    cout<<"The second largest element in array is:"<<second_large<<"\n";
    cout<<"The second smallest element in array is:"<<second_small<<"\n";
    
}


int main(){
    int arr[]={12,35,1,10,34,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    second_largest_second_smallest(arr,n);
    return 0;
}