#include<bits/stdc++.h>
using namespace std;

/*Find minimum element in unsorted array and swap it with beginning element after each iteration*/

void SelectionSort(int arr[],int n){    
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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

    SelectionSort(arr,n);

    cout<<"Array after sorting:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}