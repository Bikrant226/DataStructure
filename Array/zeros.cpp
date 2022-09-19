#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int k=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	            arr[k]=arr[i];
	            k++;
	        }
	    }
	    
	    while(k<n){
	        arr[k]=0;
	        k++;
	    }
}
int main(){

    int arr[]={3,5,0,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    pushZerosToEnd(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}