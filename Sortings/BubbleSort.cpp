#include<bits/stdc++.h>
using namespace std;

/*Repeadily swap 2 elements*/

void BubbleSort(int arr[],int n){    
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        }
        }
    }
}


int main(){
    int arr[]={13,46,24,52,20,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Array before sorting:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    BubbleSort(arr,n);

    cout<<"Array after sorting:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}